/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/Frameworks/TechSupport.framework/TechSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TSPackageCache : NSObject {

	NSMutableDictionary* filepathBasedCache_;
	NSMutableDictionary* identifierBasedCache_;

}
+(id)sharedCache;
-(id)packageWithIdentifier:(id)arg1 ;
-(id)packageForFile:(id)arg1 ;
-(void)cachePackage:(id)arg1 forFile:(id)arg2 ;
-(void)cachePackage:(id)arg1 forIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(void)didReceiveMemoryWarning;
@end

