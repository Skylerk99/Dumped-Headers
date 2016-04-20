/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RadioArtworkCollection, NSString, NSURL;

@interface RadioShareInformation : NSObject <NSCopying> {

	RadioArtworkCollection* _artworkCollection;
	NSString* _messageMIMEType;
	NSString* _message;
	NSString* _subject;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) RadioArtworkCollection * artworkCollection;              //@synthesize artworkCollection=_artworkCollection - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageMIMEType;                              //@synthesize messageMIMEType=_messageMIMEType - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * subject;                                      //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain,readonly) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(NSURL *)URL;
-(NSString *)subject;
-(id)_initWithShareInfoResponse:(id)arg1 ;
-(NSString *)messageMIMEType;
-(RadioArtworkCollection *)artworkCollection;
@end

