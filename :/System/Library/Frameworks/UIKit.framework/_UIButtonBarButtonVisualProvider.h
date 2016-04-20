/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying>
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)supportsBackButtons;
-(BOOL)buttonSelectionState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(BOOL)buttonHighlitedState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(BOOL)buttonEnabledState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 fromBarItem:(id)arg2 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(BOOL)arg2 ;
-(void)button:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(CGSize)buttonIntrinsicContentSize:(id)arg1 ;
-(UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1 ;
@end

