//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018DB10.hpp"
#include "fn_801CAA40.hpp"
#include "fn_8019203C.hpp"
#include "fn_801928B4.hpp"
#include "fn_801C7CF4.hpp"
#include "fn_801C8708.hpp"
#include "fn_802230C4.hpp"
#include "fn_AnimatedModelExplodable_GetWorldMatrix_TakeNoParams.hpp"
#include "fn_80279EEC.hpp"
#include "fn_800F7A64.hpp"
#include "fn_802310E0.hpp"
#include "fn_8027AA1C.hpp"
#include "fn_8020409C.hpp"
#include "fn_8018DB84.hpp"
#include "fn_80204B18.hpp"
#include "fn_80231120.hpp"
#include "fn_80231D90.hpp"
#include "fn_801D7DC0.hpp"
#include "fn_801E05BC.hpp"



void fn_801D7308(PPC::Runtime::GCContext* context)
{
/*801D7308 001D4108*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801D730C 001D410C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D7310 001D4110*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D7314 001D4114*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801D7318 001D4118*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*801D731C 001D411C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D7320 001D4120*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1B98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D7324 001D4124*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r3));
/*801D7328 001D4128*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*801D732C 001D412C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801D7330 001D4130*/ PPC::Runtime::ASM::beq(.L_801D74B4);
/*801D7334 001D4134*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*801D7338 001D4138*/ PPC::Runtime::ASM::bl(fn_8018DB10);
/*801D733C 001D413C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801D7340 001D4140*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D7344 001D4144*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801D7348 001D4148*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*801D734C 001D414C*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801D7350 001D4150*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801D7354 001D4154*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*801D7358 001D4158*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*801D735C 001D415C*/ PPC::Runtime::ASM::bgt(.L_801D7474);
/*801D7360 001D4160*/ PPC::Runtime::ASM::lis(context->r3, jumptable_804B0D30 @ Get_MemoryOffset_HighBit);
/*801D7364 001D4164*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801D7368 001D4168*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_804B0D30 @ Get_MemoryOffset_LowBit);
/*801D736C 001D416C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*801D7370 001D4170*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801D7374 001D4174*/ PPC::Runtime::ASM::bctr();
/*801D7378 001D4178*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801D737C 001D417C*/ PPC::Runtime::ASM::bl(fn_8019203C);
/*801D7380 001D4180*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*801D7384 001D4184*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801D7388 001D4188*/ PPC::Runtime::ASM::mr(context->r26, context->r0);
/*801D738C 001D418C*/ PPC::Runtime::ASM::bl(fn_801928B4);
/*801D7390 001D4190*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*801D7394 001D4194*/ PPC::Runtime::ASM::b(.L_801D747C);
/*801D7398 001D4198*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801D739C 001D419C*/ PPC::Runtime::ASM::bl(fn_801C7CF4);
/*801D73A0 001D41A0*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*801D73A4 001D41A4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801D73A8 001D41A8*/ PPC::Runtime::ASM::mr(context->r26, context->r0);
/*801D73AC 001D41AC*/ PPC::Runtime::ASM::bl(fn_801C8708);
/*801D73B0 001D41B0*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*801D73B4 001D41B4*/ PPC::Runtime::ASM::b(.L_801D747C);
/*801D73B8 001D41B8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801D73BC 001D41BC*/ PPC::Runtime::ASM::bl(fn_802230C4);
/*801D73C0 001D41C0*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*801D73C4 001D41C4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801D73C8 001D41C8*/ PPC::Runtime::ASM::mr(context->r26, context->r0);
/*801D73CC 001D41CC*/ PPC::Runtime::ASM::bl(fn_AnimatedModelExplodable_GetWorldMatrix_TakeNoParams);
/*801D73D0 001D41D0*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x5);
/*801D73D4 001D41D4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*801D73D8 001D41D8*/ PPC::Runtime::ASM::beq(.L_801D747C);
/*801D73DC 001D41DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*801D73E0 001D41E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D73E4 001D41E4*/ PPC::Runtime::ASM::bl(fn_80279EEC);
/*801D73E8 001D41E8*/ PPC::Runtime::ASM::b(.L_801D747C);
/*801D73EC 001D41EC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801D73F0 001D41F0*/ PPC::Runtime::ASM::li(context->r26, 0x5);
/*801D73F4 001D41F4*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*801D73F8 001D41F8*/ PPC::Runtime::ASM::bl(fn_800F7A64);
/*801D73FC 001D41FC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3d);
/*801D7400 001D4200*/ PPC::Runtime::ASM::bne(.L_801D7410);
/*801D7404 001D4204*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*801D7408 001D4208*/ PPC::Runtime::ASM::bl(fn_802310E0);
/*801D740C 001D420C*/ PPC::Runtime::ASM::b(.L_801D747C);
RUNTIME_PPC_JUMP_LABEL(.L_801D7410, 0x801D7410) //this is a jump label
/*801D7410 001D4210*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x41);
/*801D7414 001D4214*/ PPC::Runtime::ASM::bne(.L_801D747C);
/*801D7418 001D4218*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*801D741C 001D421C*/ PPC::Runtime::ASM::bl(fn_8027AA1C);
/*801D7420 001D4220*/ PPC::Runtime::ASM::b(.L_801D747C);
/*801D7424 001D4224*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801D7428 001D4228*/ PPC::Runtime::ASM::li(context->r26, 0x5);
/*801D742C 001D422C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*801D7430 001D4230*/ PPC::Runtime::ASM::bl(fn_8020409C);
/*801D7434 001D4234*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4d);
/*801D7438 001D4238*/ PPC::Runtime::ASM::bne(.L_801D747C);
/*801D743C 001D423C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801D7440 001D4240*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801D7444 001D4244*/ PPC::Runtime::ASM::bl(fn_8018DB84);
/*801D7448 001D4248*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*801D744C 001D424C*/ PPC::Runtime::ASM::beq(.L_801D7458);
/*801D7450 001D4250*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*801D7454 001D4254*/ PPC::Runtime::ASM::bne(.L_801D747C);
RUNTIME_PPC_JUMP_LABEL(.L_801D7458, 0x801D7458) //this is a jump label
/*801D7458 001D4258*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801D745C 001D425C*/ PPC::Runtime::ASM::bl(fn_80204B18);
/*801D7460 001D4260*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D7464 001D4264*/ PPC::Runtime::ASM::beq(.L_801D747C);
/*801D7468 001D4268*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*801D746C 001D426C*/ PPC::Runtime::ASM::bl(fn_80231120);
/*801D7470 001D4270*/ PPC::Runtime::ASM::b(.L_801D747C);
RUNTIME_PPC_JUMP_LABEL(.L_801D7474, 0x801D7474) //this is a jump label
/*801D7474 001D4274*/ PPC::Runtime::ASM::li(context->r26, 0x5);
/*801D7478 001D4278*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801D747C, 0x801D747C) //this is a jump label
/*801D747C 001D427C*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*801D7480 001D4280*/ PPC::Runtime::ASM::beq(.L_801D7498);
/*801D7484 001D4284*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*801D7488 001D4288*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*801D748C 001D428C*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*801D7490 001D4290*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0xbac);
/*801D7494 001D4294*/ PPC::Runtime::ASM::bl(fn_80231D90);
RUNTIME_PPC_JUMP_LABEL(.L_801D7498, 0x801D7498) //this is a jump label
/*801D7498 001D4298*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x5);
/*801D749C 001D429C*/ PPC::Runtime::ASM::beq(.L_801D74AC);
/*801D74A0 001D42A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D74A4 001D42A4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*801D74A8 001D42A8*/ PPC::Runtime::ASM::bl(fn_801D7DC0);
RUNTIME_PPC_JUMP_LABEL(.L_801D74AC, 0x801D74AC) //this is a jump label
/*801D74AC 001D42AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D74B0 001D42B0*/ PPC::Runtime::ASM::bl(fn_801E05BC);
RUNTIME_PPC_JUMP_LABEL(.L_801D74B4, 0x801D74B4) //this is a jump label
/*801D74B4 001D42B4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801D74B8 001D42B8*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*801D74BC 001D42BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D74C0 001D42C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D74C4 001D42C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801D74C8 001D42C8*/ PPC::Runtime::ASM::blr();
}