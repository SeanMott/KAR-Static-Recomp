//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_plGetPlayerKind.hpp"
#include "fn_8000979C.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_80009534.hpp"
#include "fn_8022E2E0.hpp"



void fn_8004C0EC(PPC::Runtime::GCContext* context)
{
/*8004C0EC 00048EEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004C0F0 00048EF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004C0F4 00048EF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004C0F8 00048EF8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004C0FC 00048EFC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004C100, 0x8004C100) //this is a jump label
/*8004C100 00048F00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004C104 00048F04*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004C108 00048F08*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004C10C 00048F0C*/ PPC::Runtime::ASM::bne(.L_8004C128);
/*8004C110 00048F10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004C114 00048F14*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004C118 00048F18*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004C11C 00048F1C*/ PPC::Runtime::ASM::beq(.L_8004C128);
/*8004C120 00048F20*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004C124 00048F24*/ PPC::Runtime::ASM::b(.L_8004C138);
RUNTIME_PPC_JUMP_LABEL(.L_8004C128, 0x8004C128) //this is a jump label
/*8004C128 00048F28*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004C12C 00048F2C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004C130 00048F30*/ PPC::Runtime::ASM::blt(.L_8004C100);
/*8004C134 00048F34*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004C138, 0x8004C138) //this is a jump label
/*8004C138 00048F38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004C13C 00048F3C*/ PPC::Runtime::ASM::beq(.L_8004C188);
/*8004C140 00048F40*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004C144, 0x8004C144) //this is a jump label
/*8004C144 00048F44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004C148 00048F48*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004C14C 00048F4C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004C150 00048F50*/ PPC::Runtime::ASM::bne(.L_8004C17C);
/*8004C154 00048F54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004C158 00048F58*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8004C15C 00048F5C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004C160 00048F60*/ PPC::Runtime::ASM::bne(.L_8004C17C);
/*8004C164 00048F64*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004C168 00048F68*/ PPC::Runtime::ASM::bl(fn_8022E2E0);
/*8004C16C 00048F6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004C170 00048F70*/ PPC::Runtime::ASM::beq(.L_8004C17C);
/*8004C174 00048F74*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004C178 00048F78*/ PPC::Runtime::ASM::b(.L_8004C18C);
RUNTIME_PPC_JUMP_LABEL(.L_8004C17C, 0x8004C17C) //this is a jump label
/*8004C17C 00048F7C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004C180 00048F80*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004C184 00048F84*/ PPC::Runtime::ASM::blt(.L_8004C144);
RUNTIME_PPC_JUMP_LABEL(.L_8004C188, 0x8004C188) //this is a jump label
/*8004C188 00048F88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004C18C, 0x8004C18C) //this is a jump label
/*8004C18C 00048F8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004C190 00048F90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004C194 00048F94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004C198 00048F98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004C19C 00048F9C*/ PPC::Runtime::ASM::blr();
}