//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F5FD8.hpp"
#include "fn_ColourBlendScreenTransition_Update_TakeParam_Float.hpp"
#include "fn_801F6004.hpp"
#include "fn_ColourBlendScreenTransition_Update_TakeParam_Float.hpp"
#include "fn_801CB934.hpp"
#include "fn_80062C4C.hpp"



void fn_801F7A48(PPC::Runtime::GCContext* context)
{
/*801F7A48 001F4848*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F7A4C 001F484C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F7A50 001F4850*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F7A54 001F4854*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F7A58 001F4858*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F7A5C 001F485C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66c, context->r3));
/*801F7A60 001F4860*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801F7A64 001F4864*/ PPC::Runtime::ASM::bne(.L_801F7AF4);
/*801F7A68 001F4868*/ PPC::Runtime::ASM::bl(fn_801F5FD8);
/*801F7A6C 001F486C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E20B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7A70 001F4870*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801F7A74 001F4874*/ PPC::Runtime::ASM::ble(.L_801F7AAC);
/*801F7A78 001F4878*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801F7A7C 001F487C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F7A80 001F4880*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E20C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7A84 001F4884*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*801F7A88 001F4888*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E20B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7A8C 001F488C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801F7A90 001F4890*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E20D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7A94 001F4894*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f0);
/*801F7A98 001F4898*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*801F7A9C 001F489C*/ PPC::Runtime::ASM::fdiv(context->f1, context->f1, context->f0);
/*801F7AA0 001F48A0*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*801F7AA4 001F48A4*/ PPC::Runtime::ASM::bl(fn_ColourBlendScreenTransition_Update_TakeParam_Float);
/*801F7AA8 001F48A8*/ PPC::Runtime::ASM::b(.L_801F7B78);
RUNTIME_PPC_JUMP_LABEL(.L_801F7AAC, 0x801F7AAC) //this is a jump label
/*801F7AAC 001F48AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F7AB0 001F48B0*/ PPC::Runtime::ASM::bl(fn_801F6004);
/*801F7AB4 001F48B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801F7AB8 001F48B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F7ABC 001F48BC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E20C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7AC0 001F48C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*801F7AC4 001F48C4*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E20B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7AC8 001F48C8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*801F7ACC 001F48CC*/ PPC::Runtime::ASM::fmul(context->f0, context->f3, context->f0);
/*801F7AD0 001F48D0*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*801F7AD4 001F48D4*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*801F7AD8 001F48D8*/ PPC::Runtime::ASM::bl(fn_ColourBlendScreenTransition_Update_TakeParam_Float);
/*801F7ADC 001F48DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801F7AE0 001F48E0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc40, context->r31));
/*801F7AE4 001F48E4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*801F7AE8 001F48E8*/ PPC::Runtime::ASM::ble(.L_801F7B78);
/*801F7AEC 001F48EC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801F7AF0 001F48F0*/ PPC::Runtime::ASM::b(.L_801F7B78);
RUNTIME_PPC_JUMP_LABEL(.L_801F7AF4, 0x801F7AF4) //this is a jump label
/*801F7AF4 001F48F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801F7AF8 001F48F8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E20C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7AFC 001F48FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*801F7B00 001F4900*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E20B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7B04 001F4904*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801F7B08 001F4908*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801F7B0C 001F490C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x398, context->r31));
/*801F7B10 001F4910*/ PPC::Runtime::ASM::fmul(context->f0, context->f3, context->f0);
/*801F7B14 001F4914*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*801F7B18 001F4918*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*801F7B1C 001F491C*/ PPC::Runtime::ASM::bl(fn_801CB934);
/*801F7B20 001F4920*/ PPC::Runtime::ASM::fmr(context->f0, context->f1);
/*801F7B24 001F4924*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801F7B28 001F4928*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E20C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7B2C 001F492C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xe4);
/*801F7B30 001F4930*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
/*801F7B34 001F4934*/ PPC::Runtime::ASM::bl(fn_80062C4C);
/*801F7B38 001F4938*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801F7B3C 001F493C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E20C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7B40 001F4940*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*801F7B44 001F4944*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E20B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7B48 001F4948*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
/*801F7B4C 001F494C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801F7B50 001F4950*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E209C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F7B54 001F4954*/ PPC::Runtime::ASM::fmul(context->f2, context->f3, context->f2);
/*801F7B58 001F4958*/ PPC::Runtime::ASM::frsp(context->f2, context->f2);
/*801F7B5C 001F495C*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f2);
/*801F7B60 001F4960*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f1);
/*801F7B64 001F4964*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801F7B68 001F4968*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801F7B6C 001F496C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801F7B70 001F4970*/ PPC::Runtime::ASM::bge(.L_801F7B78);
/*801F7B74 001F4974*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801F7B78, 0x801F7B78) //this is a jump label
/*801F7B78 001F4978*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F7B7C 001F497C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F7B80 001F4980*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F7B84 001F4984*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F7B88 001F4988*/ PPC::Runtime::ASM::blr();
}