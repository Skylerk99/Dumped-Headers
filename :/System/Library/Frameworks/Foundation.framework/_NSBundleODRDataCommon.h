/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock, NSBundle;

@interface _NSBundleODRDataCommon : NSObject {

	NSMutableDictionary* _assetPackToURL;
	NSLock* _lock;
	NSBundle* _bundle;
	long long _sandboxToken;

}
-(void)assetPacksBecameAvailable:(id)arg1 ;
-(void)assetPacksBecameUnavailable:(id)arg1 ;
-(id)URLForAssetPack:(id)arg1 ;
-(void)dealloc;
-(id)initWithBundle:(id)arg1 ;
@end

