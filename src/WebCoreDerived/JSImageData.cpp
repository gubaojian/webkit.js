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
#include "JSImageData.h"

#include "ImageData.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSImageDataTableValues[] =
{
    { "width", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsImageDataWidth), (intptr_t)0 },
    { "height", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsImageDataHeight), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsImageDataConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSImageDataTable = { 9, 7, JSImageDataTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSImageDataConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSImageDataConstructorTable = { 1, 0, JSImageDataConstructorTableValues, 0 };
const ClassInfo JSImageDataConstructor::s_info = { "ImageDataConstructor", &Base::s_info, &JSImageDataConstructorTable, 0, CREATE_METHOD_TABLE(JSImageDataConstructor) };

JSImageDataConstructor::JSImageDataConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSImageDataConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSImageDataPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSImageDataConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSImageDataConstructor, JSDOMWrapper>(exec, JSImageDataConstructorTable, jsCast<JSImageDataConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSImageDataPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSImageDataPrototypeTable = { 1, 0, JSImageDataPrototypeTableValues, 0 };
const ClassInfo JSImageDataPrototype::s_info = { "ImageDataPrototype", &Base::s_info, &JSImageDataPrototypeTable, 0, CREATE_METHOD_TABLE(JSImageDataPrototype) };

JSObject* JSImageDataPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSImageData>(vm, globalObject);
}

const ClassInfo JSImageData::s_info = { "ImageData", &Base::s_info, &JSImageDataTable, 0 , CREATE_METHOD_TABLE(JSImageData) };

JSImageData::JSImageData(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ImageData> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSImageData::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSImageData::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSImageDataPrototype::create(vm, globalObject, JSImageDataPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSImageData::destroy(JSC::JSCell* cell)
{
    JSImageData* thisObject = static_cast<JSImageData*>(cell);
    thisObject->JSImageData::~JSImageData();
}

JSImageData::~JSImageData()
{
    releaseImplIfNotNull();
}

bool JSImageData::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSImageData* thisObject = jsCast<JSImageData*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSImageData, Base>(exec, JSImageDataTable, thisObject, propertyName, slot);
}

EncodedJSValue jsImageDataWidth(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSImageData* castedThis = jsDynamicCast<JSImageData*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    ImageData& impl = castedThis->impl();
    JSValue result = jsNumber(impl.width());
    return JSValue::encode(result);
}


EncodedJSValue jsImageDataHeight(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSImageData* castedThis = jsDynamicCast<JSImageData*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    ImageData& impl = castedThis->impl();
    JSValue result = jsNumber(impl.height());
    return JSValue::encode(result);
}


EncodedJSValue jsImageDataConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSImageData* domObject = jsDynamicCast<JSImageData*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSImageData::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSImageData::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSImageDataConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSImageDataOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSImageDataOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSImageData* jsImageData = jsCast<JSImageData*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsImageData->impl(), jsImageData);
    jsImageData->releaseImpl();
}

ImageData* toImageData(JSC::JSValue value)
{
    return value.inherits(JSImageData::info()) ? &jsCast<JSImageData*>(value)->impl() : 0;
}

}
