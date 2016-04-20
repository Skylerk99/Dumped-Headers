/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@class CKChatItem;

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	CGRect _targetFrame;
	CGRect _currentFrame;
	double _easing;
	double _targetEasing;
	char _orientation;
	CATransform3D _contentTransform3D;
	double _targetCenterY;
	double _currentCenterY;
	double _height;
	double _factor;
	BOOL _hidden;
	CKChatItem* _chatItem;

}

@property (nonatomic,readonly) CATransform3D contentTransform3D;              //@synthesize contentTransform3D=_contentTransform3D - In the implementation block
@property (nonatomic,retain) CKChatItem * chatItem;                           //@synthesize chatItem=_chatItem - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CATransform3D)contentTransform3D;
-(CKChatItem *)chatItem;
-(void)setChatItem:(CKChatItem *)arg1 ;
@end

