//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000A200.hpp"
#include "fn_8018C8C4.hpp"
#include "fn_hwOff.hpp"



void fn_801D7AC8(PPC::Runtime::GCContext* context)
{
/*801D7AC8 001D48C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*801D7ACC 001D48CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D7AD0 001D48D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801D7AD4 001D48D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801D7AD8 001D48D8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D7ADC 001D48DC*/ PPC::Runtime::ASM::bl(fn_8000A200);
/*801D7AE0 001D48E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D7AE4 001D48E4*/ PPC::Runtime::ASM::beq(.L_801D7BD4);
/*801D7AE8 001D48E8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r31));
/*801D7AEC 001D48EC*/ PPC::Runtime::ASM::li(context->r5, STRUCT_BYTE4_COUNT_1805DD850 @ Get_MemoryOffset_SDA21);
/*801D7AF0 001D48F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1B9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D7AF4 001D48F4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*801D7AF8 001D48F8*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r7));
/*801D7AFC 001D48FC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801D7B00 001D4900*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 8, 22);
/*801D7B04 001D4904*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x2);
/*801D7B08 001D4908*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 2, 22, 29);
/*801D7B0C 001D490C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r7));
/*801D7B10 001D4910*/ PPC::Runtime::ASM::lwz(context->r3, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D7B14 001D4914*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801D7B18 001D4918*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*801D7B1C 001D491C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*801D7B20 001D4920*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D7B24 001D4924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D7B28 001D4928*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*801D7B2C 001D492C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*801D7B30 001D4930*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D7B34 001D4934*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D7B38 001D4938*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*801D7B3C 001D493C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r7));
/*801D7B40 001D4940*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D7B44 001D4944*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D7B48 001D4948*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*801D7B4C 001D494C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
/*801D7B50 001D4950*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801D7B54 001D4954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801D7B58 001D4958*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*801D7B5C 001D495C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*801D7B60 001D4960*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801D7B64 001D4964*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801D7B68 001D4968*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r7));
/*801D7B6C 001D496C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*801D7B70 001D4970*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801D7B74 001D4974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D7B78 001D4978*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r7));
/*801D7B7C 001D497C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801D7B80 001D4980*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57c, context->r31));
/*801D7B84 001D4984*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D7B88 001D4988*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x580, context->r31));
/*801D7B8C 001D498C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D7B90 001D4990*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x588, context->r31));
/*801D7B94 001D4994*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801D7B98 001D4998*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D7B9C 001D499C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r31));
/*801D7BA0 001D49A0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801D7BA4 001D49A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801D7BA8 001D49A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801D7BAC 001D49AC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801D7BB0 001D49B0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801D7BB4 001D49B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r31));
/*801D7BB8 001D49B8*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*801D7BBC 001D49BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*801D7BC0 001D49C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*801D7BC4 001D49C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801D7BC8 001D49C8*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r0);
/*801D7BCC 001D49CC*/ PPC::Runtime::ASM::bl(fn_8018C8C4);
/*801D7BD0 001D49D0*/ PPC::Runtime::ASM::b(.L_801D7BE0);
RUNTIME_PPC_JUMP_LABEL(.L_801D7BD4, 0x801D7BD4) //this is a jump label
/*801D7BD4 001D49D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r31));
/*801D7BD8 001D49D8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801D7BDC 001D49DC*/ PPC::Runtime::ASM::bl(fn_hwOff);
RUNTIME_PPC_JUMP_LABEL(.L_801D7BE0, 0x801D7BE0) //this is a jump label
/*801D7BE0 001D49E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801D7BE4 001D49E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801D7BE8 001D49E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D7BEC 001D49EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*801D7BF0 001D49F0*/ PPC::Runtime::ASM::blr();
}