/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol TIUserDictionaryEntry <NSObject>
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) NSNumber * timestamp; 
@required
-(NSNumber *)timestamp;
-(void)setTimestamp:(id)arg1;
-(NSString *)phrase;
-(void)setPhrase:(id)arg1;
-(NSString *)shortcut;
-(void)setShortcut:(id)arg1;

@end

