/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/MusicEntityTracklistItemViewDelegate.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>
#import <libobjc.A.dylib/MusicEntityViewPlaybackStatusObserving.h>

@class MusicEntityTracklistItemView, NSString, MusicEntityViewContentDescriptor;

@interface MusicEntityTracklistItemTableViewCell : UITableViewCell <MusicEntityTracklistItemViewDelegate, MusicEntityContentDescriptorViewConfiguring, MusicEntityViewPlaybackStatusObserving> {

	MusicEntityTracklistItemView* _tracklistItemView;
	double _leadingTextColumnWidth;

}

@property (assign,nonatomic) double leadingTextColumnWidth;                                     //@synthesize leadingTextColumnWidth=_leadingTextColumnWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(void)setEntityDisabled:(BOOL)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(void)setPlaybackStatus:(id)arg1 ;
-(void)setLeadingTextColumnWidth:(double)arg1 ;
-(void)tracklistItemViewDidSelectContextualActionsButton:(id)arg1 ;
-(void)tracklistItemView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 ;
-(BOOL)tracklistItemViewShouldLayoutAsEditing:(id)arg1 ;
-(double)leadingTextColumnWidth;
-(void)setEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
-(id<MusicEntityValueProviding>)entityValueProvider;
@end

