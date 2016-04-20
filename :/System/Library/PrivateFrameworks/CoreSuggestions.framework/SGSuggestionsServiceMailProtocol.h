/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceMailProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceEventsConfirmRejectProtocol,_SGSuggestionsServiceContactsConfirmRejectProtocol>
@required
-(void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)messagesToRefreshWithCompletion:(/*^block*/id)arg1;
-(void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5;
-(id)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
-(id)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(id)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(BOOL)updateMessages:(id)arg1 state:(unsigned long long)arg2 error:(id*)arg3;
-(id)fullDownloadRequestBatch:(unsigned long long)arg1 error:(id*)arg2;
-(void)prepareForRealtimeExtractionWithCompletion:(/*^block*/id)arg1;
-(BOOL)resolveFullDownloadRequests:(id)arg1 error:(id*)arg2;
-(void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)resolveFullDownloadRequests:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(id)messagesToRefreshWithError:(id*)arg1;
-(BOOL)prepareForRealtimeExtraction:(id*)arg1;
-(BOOL)reportMessagesFound:(id)arg1 lost:(id)arg2 error:(id*)arg3;
-(void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

