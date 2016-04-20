/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessageChatItem.h>

@class NSAttributedString;

@interface IMMessagePartChatItem : IMMessageChatItem {

	NSAttributedString* _text;
	long long _index;

}

@property (nonatomic,copy,readonly) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long index;                               //@synthesize index=_index - In the implementation block
+(id)_newMessagePartsForMessageItem:(id)arg1 ;
+(id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)text;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(BOOL)canDelete;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 ;
@end

