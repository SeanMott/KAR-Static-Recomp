//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_plGetPlayerKind.hpp"
#include "fn_8000979C.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_80009534.hpp"
#include "fn_8022E0D0.hpp"



void fn_8004BE1C(PPC::Runtime::GCContext* context)
{
/*8004BE1C 00048C1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004BE20 00048C20*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004BE24 00048C24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004BE28 00048C28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004BE2C 00048C2C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BE30, 0x8004BE30) //this is a jump label
/*8004BE30 00048C30*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BE34 00048C34*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004BE38 00048C38*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004BE3C 00048C3C*/ PPC::Runtime::ASM::bne(.L_8004BE58);
/*8004BE40 00048C40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BE44 00048C44*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004BE48 00048C48*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004BE4C 00048C4C*/ PPC::Runtime::ASM::beq(.L_8004BE58);
/*8004BE50 00048C50*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004BE54 00048C54*/ PPC::Runtime::ASM::b(.L_8004BE68);
RUNTIME_PPC_JUMP_LABEL(.L_8004BE58, 0x8004BE58) //this is a jump label
/*8004BE58 00048C58*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004BE5C 00048C5C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004BE60 00048C60*/ PPC::Runtime::ASM::blt(.L_8004BE30);
/*8004BE64 00048C64*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BE68, 0x8004BE68) //this is a jump label
/*8004BE68 00048C68*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004BE6C 00048C6C*/ PPC::Runtime::ASM::beq(.L_8004BEB8);
/*8004BE70 00048C70*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BE74, 0x8004BE74) //this is a jump label
/*8004BE74 00048C74*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BE78 00048C78*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004BE7C 00048C7C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004BE80 00048C80*/ PPC::Runtime::ASM::bne(.L_8004BEAC);
/*8004BE84 00048C84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BE88 00048C88*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8004BE8C 00048C8C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004BE90 00048C90*/ PPC::Runtime::ASM::bne(.L_8004BEAC);
/*8004BE94 00048C94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BE98 00048C98*/ PPC::Runtime::ASM::bl(fn_8022E0D0);
/*8004BE9C 00048C9C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004BEA0 00048CA0*/ PPC::Runtime::ASM::beq(.L_8004BEAC);
/*8004BEA4 00048CA4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004BEA8 00048CA8*/ PPC::Runtime::ASM::b(.L_8004BEBC);
RUNTIME_PPC_JUMP_LABEL(.L_8004BEAC, 0x8004BEAC) //this is a jump label
/*8004BEAC 00048CAC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004BEB0 00048CB0*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004BEB4 00048CB4*/ PPC::Runtime::ASM::blt(.L_8004BE74);
RUNTIME_PPC_JUMP_LABEL(.L_8004BEB8, 0x8004BEB8) //this is a jump label
/*8004BEB8 00048CB8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BEBC, 0x8004BEBC) //this is a jump label
/*8004BEBC 00048CBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004BEC0 00048CC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004BEC4 00048CC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004BEC8 00048CC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004BECC 00048CCC*/ PPC::Runtime::ASM::blr();
}