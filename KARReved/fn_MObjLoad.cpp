//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_TObjLoadDesc.hpp"
#include "fn_HSD_MaterialAlloc.hpp"
#include "memcpy.hpp"
#include "fn_hsdAllocMemPiece.hpp"
#include "memcpy.hpp"



void fn_MObjLoad(PPC::Runtime::GCContext* context)
{
/*803F9F04 003F6D04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F9F08 003F6D08*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F9F0C 003F6D0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F9F10 003F6D10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F9F14 003F6D14*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803F9F18 003F6D18*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803F9F1C 003F6D1C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803F9F20 003F6D20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803F9F24 003F6D24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803F9F28 003F6D28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803F9F2C 003F6D2C*/ PPC::Runtime::ASM::bl(fn_HSD_TObjLoadDesc);
/*803F9F30 003F6D30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803F9F34 003F6D34*/ PPC::Runtime::ASM::bl(fn_HSD_MaterialAlloc);
/*803F9F38 003F6D38*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803F9F3C 003F6D3C*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*803F9F40 003F6D40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803F9F44 003F6D44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803F9F48 003F6D48*/ PPC::Runtime::ASM::bl(memcpy);
/*803F9F4C 003F6D4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803F9F50 003F6D50*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1000);
/*803F9F54 003F6D54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803F9F58 003F6D58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803F9F5C 003F6D5C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803F9F60 003F6D60*/ PPC::Runtime::ASM::beq(.L_803F9F80);
/*803F9F64 003F6D64*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*803F9F68 003F6D68*/ PPC::Runtime::ASM::bl(fn_hsdAllocMemPiece);
/*803F9F6C 003F6D6C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*803F9F70 003F6D70*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803F9F74 003F6D74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*803F9F78 003F6D78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803F9F7C 003F6D7C*/ PPC::Runtime::ASM::bl(memcpy);
RUNTIME_PPC_JUMP_LABEL(.L_803F9F80, 0x803F9F80) //this is a jump label
/*803F9F80 003F6D80*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803F9F84 003F6D84*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803F9F88 003F6D88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*803F9F8C 003F6D8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F9F90 003F6D90*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803F9F94 003F6D94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F9F98 003F6D98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F9F9C 003F6D9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F9FA0 003F6DA0*/ PPC::Runtime::ASM::blr();
}