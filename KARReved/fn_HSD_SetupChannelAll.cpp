//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_Channel2Num.hpp"
#include "fn_HSD_SetupChannel.hpp"
#include "fn_GXSetNumChans.hpp"



void fn_HSD_SetupChannelAll(PPC::Runtime::GCContext* context)
{
/*803F8F48 003F5D48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F8F4C 003F5D4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F8F50 003F5D50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F8F54 003F5D54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F8F58 003F5D58*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*803F8F5C 003F5D5C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803F8F60 003F5D60*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803F8F64 003F5D64*/ PPC::Runtime::ASM::b(.L_803F8F88);
RUNTIME_PPC_JUMP_LABEL(.L_803F8F68, 0x803F8F68) //this is a jump label
/*803F8F68 003F5D68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803F8F6C 003F5D6C*/ PPC::Runtime::ASM::bl(fn_HSD_Channel2Num);
/*803F8F70 003F5D70*/ PPC::Runtime::ASM::cmpw(context->r3, context->r31);
/*803F8F74 003F5D74*/ PPC::Runtime::ASM::ble(.L_803F8F7C);
/*803F8F78 003F5D78*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803F8F7C, 0x803F8F7C) //this is a jump label
/*803F8F7C 003F5D7C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803F8F80 003F5D80*/ PPC::Runtime::ASM::bl(fn_HSD_SetupChannel);
/*803F8F84 003F5D84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803F8F88, 0x803F8F88) //this is a jump label
/*803F8F88 003F5D88*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803F8F8C 003F5D8C*/ PPC::Runtime::ASM::bne(.L_803F8F68);
/*803F8F90 003F5D90*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE1CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803F8F94 003F5D94*/ PPC::Runtime::ASM::clrlwi(context->r31, context->r31, 24);
/*803F8F98 003F5D98*/ PPC::Runtime::ASM::cmpw(context->r0, context->r31);
/*803F8F9C 003F5D9C*/ PPC::Runtime::ASM::beq(.L_803F8FAC);
/*803F8FA0 003F5DA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803F8FA4 003F5DA4*/ PPC::Runtime::ASM::bl(fn_GXSetNumChans);
/*803F8FA8 003F5DA8*/ PPC::Runtime::ASM::stw(context->r31, STRUCT_BYTE4_COUNT_1805DE1CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803F8FAC, 0x803F8FAC) //this is a jump label
/*803F8FAC 003F5DAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F8FB0 003F5DB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F8FB4 003F5DB4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803F8FB8 003F5DB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F8FBC 003F5DBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F8FC0 003F5DC0*/ PPC::Runtime::ASM::blr();
}