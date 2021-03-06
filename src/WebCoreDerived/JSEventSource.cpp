/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSEventSource.h"

#include "Dictionary.h"
#include "Event.h"
#include "EventListener.h"
#include "EventSource.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSEventSourceTableValues[] =
{
    { "URL", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceURL), (intptr_t)0 },
    { "url", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceUrl), (intptr_t)0 },
    { "withCredentials", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceWithCredentials), (intptr_t)0 },
    { "readyState", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceReadyState), (intptr_t)0 },
    { "onopen", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceOnopen), (intptr_t)setJSEventSourceOnopen },
    { "onmessage", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceOnmessage), (intptr_t)setJSEventSourceOnmessage },
    { "onerror", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceOnerror), (intptr_t)setJSEventSourceOnerror },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSEventSourceTable = { 18, 15, JSEventSourceTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSEventSourceConstructorTableValues[] =
{
    { "CONNECTING", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceCONNECTING), (intptr_t)0 },
    { "OPEN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceOPEN), (intptr_t)0 },
    { "CLOSED", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceCLOSED), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSEventSourceConstructorTable = { 8, 7, JSEventSourceConstructorTableValues, 0 };

COMPILE_ASSERT(0 == EventSource::CONNECTING, EventSourceEnumCONNECTINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == EventSource::OPEN, EventSourceEnumOPENIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == EventSource::CLOSED, EventSourceEnumCLOSEDIsWrongUseDoNotCheckConstants);

EncodedJSValue JSC_HOST_CALL JSEventSourceConstructor::constructJSEventSource(ExecState* exec)
{
    JSEventSourceConstructor* castedThis = jsCast<JSEventSourceConstructor*>(exec->callee());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& url(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Dictionary eventSourceInit(exec, exec->argument(1));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "EventSource constructor associated document is unavailable"));
    RefPtr<EventSource> object = EventSource::create(*context, url, eventSourceInit, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

static const HashTable& getJSEventSourceConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSEventSourceConstructorTable);
}

const ClassInfo JSEventSourceConstructor::s_info = { "EventSourceConstructor", &Base::s_info, 0, getJSEventSourceConstructorTable, CREATE_METHOD_TABLE(JSEventSourceConstructor) };

JSEventSourceConstructor::JSEventSourceConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSEventSourceConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSEventSourcePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSEventSourceConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEventSourceConstructor, JSDOMWrapper>(exec, getJSEventSourceConstructorTable(exec), jsCast<JSEventSourceConstructor*>(object), propertyName, slot);
}

ConstructType JSEventSourceConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSEventSource;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSEventSourcePrototypeTableValues[] =
{
    { "CONNECTING", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceCONNECTING), (intptr_t)0 },
    { "OPEN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceOPEN), (intptr_t)0 },
    { "CLOSED", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceCLOSED), (intptr_t)0 },
    { "close", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventSourcePrototypeFunctionClose), (intptr_t)0 },
    { "addEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventSourcePrototypeFunctionAddEventListener), (intptr_t)2 },
    { "removeEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventSourcePrototypeFunctionRemoveEventListener), (intptr_t)2 },
    { "dispatchEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventSourcePrototypeFunctionDispatchEvent), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSEventSourcePrototypeTable = { 17, 15, JSEventSourcePrototypeTableValues, 0 };
static const HashTable& getJSEventSourcePrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSEventSourcePrototypeTable);
}

const ClassInfo JSEventSourcePrototype::s_info = { "EventSourcePrototype", &Base::s_info, 0, getJSEventSourcePrototypeTable, CREATE_METHOD_TABLE(JSEventSourcePrototype) };

JSObject* JSEventSourcePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEventSource>(vm, globalObject);
}

bool JSEventSourcePrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSEventSourcePrototype* thisObject = jsCast<JSEventSourcePrototype*>(object);
    return getStaticPropertySlot<JSEventSourcePrototype, JSObject>(exec, getJSEventSourcePrototypeTable(exec), thisObject, propertyName, slot);
}

static const HashTable& getJSEventSourceTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSEventSourceTable);
}

const ClassInfo JSEventSource::s_info = { "EventSource", &Base::s_info, 0, getJSEventSourceTable , CREATE_METHOD_TABLE(JSEventSource) };

JSEventSource::JSEventSource(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<EventSource> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSEventSource::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSEventSource::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSEventSourcePrototype::create(vm, globalObject, JSEventSourcePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSEventSource::destroy(JSC::JSCell* cell)
{
    JSEventSource* thisObject = static_cast<JSEventSource*>(cell);
    thisObject->JSEventSource::~JSEventSource();
}

JSEventSource::~JSEventSource()
{
    releaseImplIfNotNull();
}

bool JSEventSource::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSEventSource* thisObject = jsCast<JSEventSource*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSEventSource, Base>(exec, getJSEventSourceTable(exec), thisObject, propertyName, slot);
}

EncodedJSValue jsEventSourceURL(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    EventSource& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.url());
    return JSValue::encode(result);
}


EncodedJSValue jsEventSourceUrl(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    EventSource& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.url());
    return JSValue::encode(result);
}


EncodedJSValue jsEventSourceWithCredentials(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    EventSource& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.withCredentials());
    return JSValue::encode(result);
}


EncodedJSValue jsEventSourceReadyState(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    EventSource& impl = castedThis->impl();
    JSValue result = jsNumber(impl.readyState());
    return JSValue::encode(result);
}


EncodedJSValue jsEventSourceOnopen(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    EventSource& impl = castedThis->impl();
    if (EventListener* listener = impl.onopen()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsEventSourceOnmessage(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    EventSource& impl = castedThis->impl();
    if (EventListener* listener = impl.onmessage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsEventSourceOnerror(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    EventSource& impl = castedThis->impl();
    if (EventListener* listener = impl.onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsEventSourceConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSEventSource* domObject = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSEventSource::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSEventSource::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSEventSource* thisObject = jsCast<JSEventSource*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSEventSource, Base>(exec, propertyName, value, getJSEventSourceTable(exec), thisObject, slot);
}

void setJSEventSourceOnopen(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    EventSource& impl = castedThis->impl();
    impl.setOnopen(createJSAttributeEventListener(exec, value, castedThis));
}


void setJSEventSourceOnmessage(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    EventSource& impl = castedThis->impl();
    impl.setOnmessage(createJSAttributeEventListener(exec, value, castedThis));
}


void setJSEventSourceOnerror(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    EventSource& impl = castedThis->impl();
    impl.setOnerror(createJSAttributeEventListener(exec, value, castedThis));
}


JSValue JSEventSource::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSEventSourceConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsEventSourcePrototypeFunctionClose(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEventSource::info());
    EventSource& impl = castedThis->impl();
    impl.close();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventSourcePrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEventSource::info());
    EventSource& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventSourcePrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEventSource::info());
    EventSource& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventSourcePrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSEventSource* castedThis = jsDynamicCast<JSEventSource*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEventSource::info());
    EventSource& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* evt(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl.dispatchEvent(evt, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSEventSource::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSEventSource* thisObject = jsCast<JSEventSource*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

// Constant getters

EncodedJSValue jsEventSourceCONNECTING(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0)));
}

EncodedJSValue jsEventSourceOPEN(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(1)));
}

EncodedJSValue jsEventSourceCLOSED(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(2)));
}

bool JSEventSourceOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSEventSource* jsEventSource = jsCast<JSEventSource*>(handle.get().asCell());
    if (jsEventSource->impl().hasPendingActivity())
        return true;
    if (jsEventSource->impl().isFiringEventListeners())
        return true;
    UNUSED_PARAM(visitor);
    return false;
}

void JSEventSourceOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSEventSource* jsEventSource = jsCast<JSEventSource*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsEventSource->impl(), jsEventSource);
    jsEventSource->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7EventSource@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11EventSourceE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, EventSource* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSEventSource>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7EventSource@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore11EventSourceE[2];
#if COMPILER(CLANG)
    // If this fails EventSource does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(EventSource), EventSource_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // EventSource has subclasses. If EventSource has subclasses that get passed
    // to toJS() we currently require EventSource you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<EventSource>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSEventSource>(exec, globalObject, impl);
}

EventSource* toEventSource(JSC::JSValue value)
{
    return value.inherits(JSEventSource::info()) ? &jsCast<JSEventSource*>(value)->impl() : 0;
}

}
