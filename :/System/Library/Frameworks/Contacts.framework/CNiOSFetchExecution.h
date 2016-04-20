/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABSearchOperation;

@interface CNiOSFetchExecution : NSObject {

	ABSearchOperation* _searchOperation;

}

@property (nonatomic,retain) ABSearchOperation * searchOperation;              //@synthesize searchOperation=_searchOperation - In the implementation block
+(id)contactsMatchingPredicate:(id)arg1 sortOrdering:(unsigned)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 addressBook:(void*)arg5 error:(id*)arg6 ;
+(id)contactsMatchingPredicate:(id)arg1 sortOrdering:(unsigned)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 progressiveResults:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
+(void)_extractContacts:(id*)arg1 matchInfo:(id*)arg2 fromBlockResults:(id)arg3 containsNestedResults:(BOOL)arg4 ;
-(ABSearchOperation *)searchOperation;
-(void)setSearchOperation:(ABSearchOperation *)arg1 ;
@end

