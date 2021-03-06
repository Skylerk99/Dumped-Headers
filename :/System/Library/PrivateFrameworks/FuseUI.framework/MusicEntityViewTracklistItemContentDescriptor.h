/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityViewContentDescriptor.h>

@class NSArray, MusicEntityViewContentTextDescriptor, MusicEntityViewContentArtworkDescriptor, UIColor;

@interface MusicEntityViewTracklistItemContentDescriptor : MusicEntityViewContentDescriptor {

	BOOL _wantsMediaTypeImage;
	NSArray* _detailTextDescriptors;
	MusicEntityViewContentTextDescriptor* _leadingTextDescriptor;
	MusicEntityViewContentTextDescriptor* _trailingTextDescriptor;
	MusicEntityViewContentArtworkDescriptor* _trailingAccessoryArtworkDescriptor;
	UIColor* _mediaTypeTintColor;

}

@property (nonatomic,copy) NSArray * detailTextDescriptors;                                                             //@synthesize detailTextDescriptors=_detailTextDescriptors - In the implementation block
@property (nonatomic,retain) MusicEntityViewContentTextDescriptor * leadingTextDescriptor;                              //@synthesize leadingTextDescriptor=_leadingTextDescriptor - In the implementation block
@property (nonatomic,retain) MusicEntityViewContentTextDescriptor * trailingTextDescriptor;                             //@synthesize trailingTextDescriptor=_trailingTextDescriptor - In the implementation block
@property (nonatomic,retain) MusicEntityViewContentArtworkDescriptor * trailingAccessoryArtworkDescriptor;              //@synthesize trailingAccessoryArtworkDescriptor=_trailingAccessoryArtworkDescriptor - In the implementation block
@property (nonatomic,retain) UIColor * mediaTypeTintColor;                                                              //@synthesize mediaTypeTintColor=_mediaTypeTintColor - In the implementation block
@property (assign,nonatomic) BOOL wantsMediaTypeImage;                                                                  //@synthesize wantsMediaTypeImage=_wantsMediaTypeImage - In the implementation block
+(Class)tableViewCellClass;
+(id)tableViewCellReuseIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)textDescriptors;
-(MusicEntityViewContentTextDescriptor *)trailingTextDescriptor;
-(MusicEntityViewContentTextDescriptor *)leadingTextDescriptor;
-(void)setMediaTypeTintColor:(UIColor *)arg1 ;
-(void)setDetailTextDescriptors:(NSArray *)arg1 ;
-(void)setLeadingTextDescriptor:(MusicEntityViewContentTextDescriptor *)arg1 ;
-(void)setTrailingAccessoryArtworkDescriptor:(MusicEntityViewContentArtworkDescriptor *)arg1 ;
-(void)setTrailingTextDescriptor:(MusicEntityViewContentTextDescriptor *)arg1 ;
-(void)setWantsMediaTypeImage:(BOOL)arg1 ;
-(NSArray *)detailTextDescriptors;
-(MusicEntityViewContentArtworkDescriptor *)trailingAccessoryArtworkDescriptor;
-(UIColor *)mediaTypeTintColor;
-(BOOL)wantsMediaTypeImage;
@end

