﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API UpdateFunctionDefinitionRequest : public GreengrassRequest
  {
  public:
    UpdateFunctionDefinitionRequest();
    Aws::String SerializePayload() const override;

    /**
     * the unique Id of the lambda definition
     */
    inline const Aws::String& GetFunctionDefinitionId() const{ return m_functionDefinitionId; }

    /**
     * the unique Id of the lambda definition
     */
    inline void SetFunctionDefinitionId(const Aws::String& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = value; }

    /**
     * the unique Id of the lambda definition
     */
    inline void SetFunctionDefinitionId(Aws::String&& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = std::move(value); }

    /**
     * the unique Id of the lambda definition
     */
    inline void SetFunctionDefinitionId(const char* value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId.assign(value); }

    /**
     * the unique Id of the lambda definition
     */
    inline UpdateFunctionDefinitionRequest& WithFunctionDefinitionId(const Aws::String& value) { SetFunctionDefinitionId(value); return *this;}

    /**
     * the unique Id of the lambda definition
     */
    inline UpdateFunctionDefinitionRequest& WithFunctionDefinitionId(Aws::String&& value) { SetFunctionDefinitionId(std::move(value)); return *this;}

    /**
     * the unique Id of the lambda definition
     */
    inline UpdateFunctionDefinitionRequest& WithFunctionDefinitionId(const char* value) { SetFunctionDefinitionId(value); return *this;}

    /**
     * name of the definition
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * name of the definition
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * name of the definition
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * name of the definition
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * name of the definition
     */
    inline UpdateFunctionDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * name of the definition
     */
    inline UpdateFunctionDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * name of the definition
     */
    inline UpdateFunctionDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_functionDefinitionId;
    bool m_functionDefinitionIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws