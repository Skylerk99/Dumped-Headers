/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:57:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libapplist.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libapplist.dylib/libapplist.dylib-Structs.h>
#import <libapplist.dylib/ALApplicationList.h>

@interface ALApplicationListImpl : ALApplicationList
-(id)applicationsFilteredUsingPredicate:(id)arg1 ;
-(CGImageRef)copyIconOfSize:(unsigned long long)arg1 forDisplayIdentifier:(id)arg2 ;
-(id)applicationsFilteredUsingPredicate:(id)arg1 onlyVisible:(BOOL)arg2 titleSortedIdentifiers:(id*)arg3 ;
-(id)valueForKeyPath:(id)arg1 forDisplayIdentifier:(id)arg2 ;
-(id)valueForKey:(id)arg1 forDisplayIdentifier:(id)arg2 ;
-(id)init;
-(long long)applicationCount;
-(id)applications;
@end

