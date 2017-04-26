//
//  SNABCasePolicy.h
//  SNABTest
//
//  Created by lisheng3 on 2017/4/6.
//  Copyright © 2017年 sina. All rights reserved.
//

@import Foundation;

@protocol SNABCasePolicy <NSObject>

- (NSString *)testName;
- (NSString *)caseName;

@end

@interface SNABCasePolicy : NSObject <SNABCasePolicy>

@property (nonatomic, copy) NSString *testName;
@property (nonatomic, copy) NSString *caseName;

@end
