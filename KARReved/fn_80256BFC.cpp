//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005D2B4.hpp"
#include "fn_8005DE3C.hpp"
#include "fn_8005DB44.hpp"
#include "fn_80061168.hpp"
#include "fn_8005F528.hpp"



void fn_80256BFC(PPC::Runtime::GCContext* context)
{
/*80256BFC 002539FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80256C00 00253A00*/ PPC::Runtime::ASM::mflr(context->r0);
/*80256C04 00253A04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80256C08 00253A08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80256C0C 00253A0C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80256C10 00253A10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r3));
/*80256C14 00253A14*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80256C18 00253A18*/ PPC::Runtime::ASM::bne(.L_80256C48);
/*80256C1C 00253A1C*/ PPC::Runtime::ASM::bl(fn_8005D2B4);
/*80256C20 00253A20*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x244, context->r31));
/*80256C24 00253A24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80256C28 00253A28*/ PPC::Runtime::ASM::bl(fn_8005DE3C);
/*80256C2C 00253A2C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r31));
/*80256C30 00253A30*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xdc);
/*80256C34 00253A34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2DB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256C38 00253A38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r31));
/*80256C3C 00253A3C*/ PPC::Runtime::ASM::bl(fn_8005DB44);
/*80256C40 00253A40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r31));
/*80256C44 00253A44*/ PPC::Runtime::ASM::bl(fn_80061168);
RUNTIME_PPC_JUMP_LABEL(.L_80256C48, 0x80256C48) //this is a jump label
/*80256C48 00253A48*/ PPC::Runtime::ASM::lis(context->r3, 0x13);
/*80256C4C 00253A4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x244, context->r31));
/*80256C50 00253A50*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r31));
/*80256C54 00253A54*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xb);
/*80256C58 00253A58*/ PPC::Runtime::ASM::bl(fn_8005F528);
/*80256C5C 00253A5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80256C60 00253A60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80256C64 00253A64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80256C68 00253A68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80256C6C 00253A6C*/ PPC::Runtime::ASM::blr();
}