/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFDragSource <NSObject>
@required
-(id)viewForDragSource;
-(id)viewForDraggedItem:(id)arg1 atScale:(double)arg2;
-(BOOL)allowsDrag;
-(void)dragCompletedForItem:(id)arg1 success:(BOOL)arg2;
-(CGRect*)frameForDraggedItem:(id)arg1;
-(void)dragStartedWithItem:(id)arg1;
-(void)animatePlaceholderForDragFailure:(id)arg1;
-(id)dragInitiatedAtPoint:(CGPoint)arg1;

@end

