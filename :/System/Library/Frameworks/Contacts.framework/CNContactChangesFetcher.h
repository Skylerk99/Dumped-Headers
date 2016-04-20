/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CNContactChangesFetcher : NSObject {

	BOOL _unify;
	NSSet* _identifiers;
	NSSet* _keysToFetch;

}

@property (nonatomic,retain) NSSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSSet * keysToFetch;              //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL unify;                       //@synthesize unify=_unify - In the implementation block
-(BOOL)unify;
-(void)setUnify:(BOOL)arg1 ;
-(NSSet *)keysToFetch;
-(void)setKeysToFetch:(NSSet *)arg1 ;
-(NSSet *)identifiers;
-(void)setIdentifiers:(NSSet *)arg1 ;
@end

