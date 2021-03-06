/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSString;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem {

	IMHandle* _sender;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,retain,readonly) IMHandle * sender;              //@synthesize sender=_sender - In the implementation block
-(Class)__ck_chatItemClass;
-(void)dealloc;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)sender;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

