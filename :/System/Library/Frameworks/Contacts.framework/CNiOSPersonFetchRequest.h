/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNiOSContactPredicate;
@interface CNiOSPersonFetchRequest : NSObject {

	id<CNiOSContactPredicate> _predicate;
	BOOL _shouldSort;
	unsigned _sortOrder;
	unsigned long long _options;

}

@property (readonly) id<CNiOSContactPredicate> predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (readonly) BOOL shouldSort;                                  //@synthesize shouldSort=_shouldSort - In the implementation block
@property (readonly) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (readonly) unsigned sortOrder;                               //@synthesize sortOrder=_sortOrder - In the implementation block
+(id)fetchRequestFromCNFetchRequest:(id)arg1 error:(id*)arg2 ;
+(id)validatePredicate:(id)arg1 error:(id*)arg2 ;
+(long long)resolvedSortOrderFromContactSortOrder:(long long)arg1 ;
+(id)effectivePredicate:(id)arg1 ;
-(BOOL)shouldSort;
-(id)initWithPredicate:(id)arg1 shouldSort:(BOOL)arg2 sortOrder:(unsigned)arg3 options:(unsigned long long)arg4 ;
-(void)dealloc;
-(id<CNiOSContactPredicate>)predicate;
-(unsigned)sortOrder;
-(unsigned long long)options;
@end

