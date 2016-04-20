/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, WBSFeedParserDelegate;
@class NSObject, NSData, WBSFeedElement, NSMutableArray, NSString;

@interface WBSFeedParser : NSObject <NSXMLParserDelegate, NSCopying> {

	NSObject*<OS_dispatch_queue> _parsingQueue;
	NSData* _data;
	WBSFeedElement* _root;
	NSMutableArray* _elementStack;
	id<WBSFeedParserDelegate> _delegate;

}

@property (assign,nonatomic) id<WBSFeedParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WBSFeedParserDelegate>)arg1 ;
-(id<WBSFeedParserDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)_beginParsingData:(id)arg1 ;
-(void)_parsingFailedWithError:(id)arg1 ;
-(void)_parsingFinishedWithMetada:(id)arg1 entries:(id)arg2 ;
-(void)_parseAsRSSFeed;
-(void)_parseAsAtomFeed;
-(void)startParsing;
@end

