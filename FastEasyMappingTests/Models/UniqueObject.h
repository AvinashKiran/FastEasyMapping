//
// Created by zen on 11/09/15.
// Copyright (c) 2015 Yalantis. All rights reserved.
//

@import Foundation;

@class FEMMapping;

@interface UniqueObject : NSObject

@property (nonatomic) NSInteger integerPrimaryKey;
@property (nonatomic, copy) NSString *stringPrimaryKey;

@end

@interface UniqueObject (Mapping)

+ (FEMMapping *)defaultMapping;

@end