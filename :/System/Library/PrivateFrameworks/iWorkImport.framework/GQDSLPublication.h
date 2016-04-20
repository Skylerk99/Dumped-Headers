/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDRoot.h>

@class GQDSLPageMargins, GQDSStylesheet;

@interface GQDSLPublication : GQDRoot {

	CGSize mPageSize;
	GQDSLPageMargins* mPageMargins;
	GQDSStylesheet* mStylesheet;
	BOOL mHasBody;
	BOOL mIsOldTemplateNameMapInitialized;
	CFDictionaryRef mOldTemplateNameMap;
	BOOL mShowOutliner;
	BOOL mHasHeaders;
	BOOL mHasFooters;

}
+(xmlNs*)appNamespace;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(CFStringRef)createFixedPathForOldAppBundleResourcePath:(CFStringRef)arg1 ;
-(CFArrayRef)createUpgradedPathComponentsFromOldTemplatePathComponents:(CFArrayRef)arg1 ;
-(CFStringRef)createUpgradedPathForOldAssetPath:(CFStringRef)arg1 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 fileUrl:(CFURLRef)arg3 ;
-(void)initializeAppBundleResourcesUrl:(CFURLRef)arg1 ;
-(void)setPageMargins:(id)arg1 ;
-(id)pageMargins;
-(BOOL)showOutliner;
-(BOOL)hasHeaders;
-(BOOL)hasFooters;
-(void)dealloc;
-(id)init;
-(BOOL)hasBody;
-(CGSize)pageSize;
-(id)stylesheet;
-(void)setStylesheet:(id)arg1 ;
@end

