/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/Flex.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FYPatchList : NSObject {

	NSMutableArray* _patches;

}
+(id)sharedInstance;
-(void)loadPatches;
-(void)savePatches;
-(id)patches;
-(void)removePatch:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)addPatch:(id)arg1 ;
@end

