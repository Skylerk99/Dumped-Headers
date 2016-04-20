/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
@interface SUAssetSupport : NSObject
+(id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1 ;
+(id)tryCreateDocumentationFromDocumentationAsset:(id)arg1 ;
+(void)_cleanupAllAssetsOfType:(id)arg1 ;
+(id)getLocalDefaultSoftwareUpdateAssetIfExists;
+(id)_gestaltValueForKey:(CFStringRef)arg1 ;
+(id)findAssetWithMatcher:(id)arg1 localSearch:(BOOL)arg2 error:(id*)arg3 ;
+(id)defaultAssetDownloadOptionsWithPriority:(int)arg1 ;
+(id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1 ;
+(void)cleanupAllSoftwareUpdateAssets;
+(void)cleanupAllSoftwareUpdateAndRelatedAssets;
+(void)purgeMSUUpdate:(/*^block*/id)arg1 ;
+(id)assetDownloadOptionsForDocumentation;
+(id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3 forBrain:(BOOL)arg4 ;
@end

