//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191F68.hpp"
#include "fn_801C7D24.hpp"
#include "fn_80191F68.hpp"
#include "fn_801C7D24.hpp"



void fn_8000B108(PPC::Runtime::GCContext* context)
{
/*8000B108 00007F08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000B10C 00007F0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000B110 00007F10*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8000B114 00007F14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B118 00007F18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B11C 00007F1C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8000B120 00007F20*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8000B124 00007F24*/ PPC::Runtime::ASM::beq(.L_8000B1D0);
/*8000B128 00007F28*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8000B12C 00007F2C*/ PPC::Runtime::ASM::beq(.L_8000B1D0);
/*8000B130 00007F30*/ PPC::Runtime::ASM::cmplw(context->r3, context->r30);
/*8000B134 00007F34*/ PPC::Runtime::ASM::bne(.L_8000B140);
/*8000B138 00007F38*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8000B13C 00007F3C*/ PPC::Runtime::ASM::b(.L_8000B1D4);
RUNTIME_PPC_JUMP_LABEL(.L_8000B140, 0x8000B140) //this is a jump label
/*8000B140 00007F40*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8000B144 00007F44*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*8000B148 00007F48*/ PPC::Runtime::ASM::beq(.L_8000B15C);
/*8000B14C 00007F4C*/ PPC::Runtime::ASM::bge(.L_8000B174);
/*8000B150 00007F50*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x10);
/*8000B154 00007F54*/ PPC::Runtime::ASM::bge(.L_8000B168);
/*8000B158 00007F58*/ PPC::Runtime::ASM::b(.L_8000B174);
RUNTIME_PPC_JUMP_LABEL(.L_8000B15C, 0x8000B15C) //this is a jump label
/*8000B15C 00007F5C*/ PPC::Runtime::ASM::bl(fn_80191F68);
/*8000B160 00007F60*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000B164 00007F64*/ PPC::Runtime::ASM::b(.L_8000B17C);
RUNTIME_PPC_JUMP_LABEL(.L_8000B168, 0x8000B168) //this is a jump label
/*8000B168 00007F68*/ PPC::Runtime::ASM::bl(fn_801C7D24);
/*8000B16C 00007F6C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000B170 00007F70*/ PPC::Runtime::ASM::b(.L_8000B17C);
RUNTIME_PPC_JUMP_LABEL(.L_8000B174, 0x8000B174) //this is a jump label
/*8000B174 00007F74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8000B178 00007F78*/ PPC::Runtime::ASM::b(.L_8000B1D4);
RUNTIME_PPC_JUMP_LABEL(.L_8000B17C, 0x8000B17C) //this is a jump label
/*8000B17C 00007F7C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0xff);
/*8000B180 00007F80*/ PPC::Runtime::ASM::beq(.L_8000B1D0);
/*8000B184 00007F84*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8000B188 00007F88*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*8000B18C 00007F8C*/ PPC::Runtime::ASM::beq(.L_8000B1A0);
/*8000B190 00007F90*/ PPC::Runtime::ASM::bge(.L_8000B1B8);
/*8000B194 00007F94*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x10);
/*8000B198 00007F98*/ PPC::Runtime::ASM::bge(.L_8000B1AC);
/*8000B19C 00007F9C*/ PPC::Runtime::ASM::b(.L_8000B1B8);
RUNTIME_PPC_JUMP_LABEL(.L_8000B1A0, 0x8000B1A0) //this is a jump label
/*8000B1A0 00007FA0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8000B1A4 00007FA4*/ PPC::Runtime::ASM::bl(fn_80191F68);
/*8000B1A8 00007FA8*/ PPC::Runtime::ASM::b(.L_8000B1C0);
RUNTIME_PPC_JUMP_LABEL(.L_8000B1AC, 0x8000B1AC) //this is a jump label
/*8000B1AC 00007FAC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8000B1B0 00007FB0*/ PPC::Runtime::ASM::bl(fn_801C7D24);
/*8000B1B4 00007FB4*/ PPC::Runtime::ASM::b(.L_8000B1C0);
RUNTIME_PPC_JUMP_LABEL(.L_8000B1B8, 0x8000B1B8) //this is a jump label
/*8000B1B8 00007FB8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8000B1BC 00007FBC*/ PPC::Runtime::ASM::b(.L_8000B1D4);
RUNTIME_PPC_JUMP_LABEL(.L_8000B1C0, 0x8000B1C0) //this is a jump label
/*8000B1C0 00007FC0*/ PPC::Runtime::ASM::cmpw(context->r31, context->r3);
/*8000B1C4 00007FC4*/ PPC::Runtime::ASM::bne(.L_8000B1D0);
/*8000B1C8 00007FC8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8000B1CC 00007FCC*/ PPC::Runtime::ASM::b(.L_8000B1D4);
RUNTIME_PPC_JUMP_LABEL(.L_8000B1D0, 0x8000B1D0) //this is a jump label
/*8000B1D0 00007FD0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8000B1D4, 0x8000B1D4) //this is a jump label
/*8000B1D4 00007FD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B1D8 00007FD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B1DC 00007FDC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8000B1E0 00007FE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000B1E4 00007FE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000B1E8 00007FE8*/ PPC::Runtime::ASM::blr();
}