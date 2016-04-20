/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSAttributedString, NSURL, NSDate, IMSPIHandle;

@interface IMSPIMessage : NSObject {

	NSString* _guid;
	NSArray* _chatGUIDs;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _subject;
	NSArray* _recipients;
	NSURL* _url;
	NSDate* _date;
	IMSPIHandle* _sender;
	long long _messageID;
	BOOL _isOutgoing;
	BOOL _isRead;
	BOOL _isAudioMessage;
	NSArray* _chatGuids;

}

@property (retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (assign) long long messageID;                              //@synthesize messageID=_messageID - In the implementation block
@property (retain,readonly) NSArray * chatGuids;                     //@synthesize chatGuids=_chatGuids - In the implementation block
@property (retain) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (retain) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (retain) NSString * subject;                               //@synthesize subject=_subject - In the implementation block
@property (retain) IMSPIHandle * sender;                             //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                             //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (assign) BOOL isOutgoing;                                  //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (assign) BOOL isRead;                                      //@synthesize isRead=_isRead - In the implementation block
@property (assign) BOOL isAudioMessage;                              //@synthesize isAudioMessage=_isAudioMessage - In the implementation block
@property (retain) NSArray * chatGUIDs;                              //@synthesize chatGUIDs=_chatGUIDs - In the implementation block
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSURL *)url;
-(NSDate *)date;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(IMSPIHandle *)sender;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(void)setSender:(IMSPIHandle *)arg1 ;
-(NSString *)subject;
-(BOOL)isRead;
-(BOOL)isAudioMessage;
-(long long)messageID;
-(BOOL)isOutgoing;
-(void)setIsRead:(BOOL)arg1 ;
-(void)setMessageID:(long long)arg1 ;
-(void)setChatGUIDs:(NSArray *)arg1 ;
-(NSArray *)chatGUIDs;
-(void)setIsOutgoing:(BOOL)arg1 ;
-(NSArray *)chatGuids;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setIsAudioMessage:(BOOL)arg1 ;
@end

