/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class CPBitmapStore, NSSet;

@interface UIKeyboardCache : NSObject {

	CPBitmapStore* _store;
	NSSet* _layouts;
	BOOL _isCommitting;

}
+(BOOL)enabled;
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)commitTransaction;
-(void)clearNonPersistentCache;
-(void)updateCacheForInputModes:(id)arg1 ;
-(id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3 ;
-(CGImageRef)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3 ;
-(CGImageRef)cachedImageForKey:(id)arg1 fromLayout:(id)arg2 ;
-(void)displayView:(id)arg1 imageWidth:(double)arg2 fromLayout:(id)arg3 ;
-(id)uniqueLayoutsFromInputModes:(id)arg1 ;
-(void)displayView:(id)arg1 fromLayout:(id)arg2 ;
@end

