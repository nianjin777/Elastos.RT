//=========================================================================
// Copyright (C) 2012 The Elastos Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=========================================================================

#ifndef __CCPPVECTORINFO_H__
#define __CCPPVECTORINFO_H__

#include "CClsModule.h"

class CCppVectorInfo
    : public ElLightRefBase
    , public ICppVectorInfo
{
public:
    CCppVectorInfo(
        /* [in] */ IDataTypeInfo* elementTypeInfo,
        /* [in] */ Int32 length);

    CARAPI_(PInterface) Probe(
        /* [in] */ REIID riid);

    CARAPI_(UInt32) AddRef();

    CARAPI_(UInt32) Release();

    CARAPI GetInterfaceID(
        /* [in] */ IInterface* object,
        /* [out] */ InterfaceID* iid);

    CARAPI GetName(
        /* [out] */ String* name);

    CARAPI GetSize(
        /* [out] */ MemorySize* size);

    CARAPI GetDataType(
        /* [out] */ CarDataType* dataType);

    CARAPI GetElementTypeInfo(
        /* [out] */ IDataTypeInfo** elementTypeInfo);

    CARAPI GetLength(
        /* [out] */ Int32* length);

    CARAPI GetMaxAlignSize(
        /* [out] */ MemorySize* alignSize);

private:
    AutoPtr<IDataTypeInfo>  mElementTypeInfo;
    Int32                   mLength;
    Int32                   mSize;
};

#endif // __CCPPVECTORINFO_H__
