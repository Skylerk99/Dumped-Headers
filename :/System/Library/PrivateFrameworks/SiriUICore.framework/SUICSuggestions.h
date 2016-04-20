/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SUICSuggestionsDelegate;
@class NSObject, NSArray, NSString;

@interface SUICSuggestions : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _suggestedUtterances;
	NSString* _languageCode;
	id<SUICSuggestionsDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * languageCode;                             //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,__weak,readonly) id<SUICSuggestionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SUICSuggestionsDelegate>)delegate;
-(NSString *)languageCode;
-(void)getSuggestionsWithCompletion:(/*^block*/id)arg1 ;
-(id)_suggestionsFilePath;
-(id)initWithLanguageCode:(id)arg1 delegate:(id)arg2 ;
-(void)setSuggestedUtterances:(id)arg1 ;
@end

