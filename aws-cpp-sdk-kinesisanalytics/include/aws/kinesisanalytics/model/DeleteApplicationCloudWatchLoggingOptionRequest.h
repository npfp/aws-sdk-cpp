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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICS_API DeleteApplicationCloudWatchLoggingOptionRequest : public KinesisAnalyticsRequest
  {
  public:
    DeleteApplicationCloudWatchLoggingOptionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Kinesis Analytics application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The Amazon Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The Amazon Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The Amazon Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The Amazon Kinesis Analytics application name.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The Amazon Kinesis Analytics application name.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Kinesis Analytics application name.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The version ID of the Amazon Kinesis Analytics application.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>The version ID of the Amazon Kinesis Analytics application.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>The version ID of the Amazon Kinesis Analytics application.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can use the <a>DescribeApplication</a> operation to get the
     * <code>CloudWatchLoggingOptionId</code>. </p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const{ return m_cloudWatchLoggingOptionId; }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can use the <a>DescribeApplication</a> operation to get the
     * <code>CloudWatchLoggingOptionId</code>. </p>
     */
    inline void SetCloudWatchLoggingOptionId(const Aws::String& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = value; }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can use the <a>DescribeApplication</a> operation to get the
     * <code>CloudWatchLoggingOptionId</code>. </p>
     */
    inline void SetCloudWatchLoggingOptionId(Aws::String&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::move(value); }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can use the <a>DescribeApplication</a> operation to get the
     * <code>CloudWatchLoggingOptionId</code>. </p>
     */
    inline void SetCloudWatchLoggingOptionId(const char* value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId.assign(value); }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can use the <a>DescribeApplication</a> operation to get the
     * <code>CloudWatchLoggingOptionId</code>. </p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(const Aws::String& value) { SetCloudWatchLoggingOptionId(value); return *this;}

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can use the <a>DescribeApplication</a> operation to get the
     * <code>CloudWatchLoggingOptionId</code>. </p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(Aws::String&& value) { SetCloudWatchLoggingOptionId(std::move(value)); return *this;}

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can use the <a>DescribeApplication</a> operation to get the
     * <code>CloudWatchLoggingOptionId</code>. </p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(const char* value) { SetCloudWatchLoggingOptionId(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;
    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
