/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKLabelNavFeature;
#import <VectorKit/VectorKit-Structs.h>
@class NSString;

@interface VKLabelNavRoadLabel : NSObject {

	shared_ptr<vk::NavLabel>* _label;
	int _navLabelType;
	id<VKLabelNavFeature> _navFeature;
	NSString* _displayGroup;
	long long _alignment;
	float _desiredOffsetDistance;
	unsigned _displayID;

}

@property (assign,nonatomic) id<VKLabelNavFeature> navFeature;                     //@synthesize navFeature=_navFeature - In the implementation block
@property (nonatomic,readonly) const shared_ptr<vk::NavLabel>* label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long alignment;                                  //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) float desiredOffsetDistance;                          //@synthesize desiredOffsetDistance=_desiredOffsetDistance - In the implementation block
@property (assign,nonatomic) unsigned displayID;                                   //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,readonly) BOOL isShieldLabel; 
@property (nonatomic,readonly) BOOL isRoadLabel; 
@property (nonatomic,readonly) BOOL isJunctionLabel; 
-(void)setAlignment:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(const shared_ptr<vk::NavLabel>*)label;
-(long long)alignment;
-(unsigned)displayID;
-(void)setDisplayID:(unsigned)arg1 ;
-(void)setDesiredOffsetDistance:(float)arg1 ;
-(id)initWithNavFeature:(id)arg1 label:(const shared_ptr<vk::NavLabel>*)arg2 navLabelType:(int)arg3 ;
-(float)desiredOffsetDistance;
-(void)setNavFeature:(id<VKLabelNavFeature>)arg1 ;
-(id)displayGroup;
-(id<VKLabelNavFeature>)navFeature;
-(BOOL)isRoadLabel;
-(BOOL)isJunctionLabel;
-(BOOL)isShieldLabel;
@end

