//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801389D8.hpp"



void fn_80159370(PPC::Runtime::GCContext* context)
{
/*80159370 00156170*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80159374 00156174*/ PPC::Runtime::ASM::mflr(context->r0);
/*80159378 00156178*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015937C 0015617C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80159380 00156180*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80159384 00156184*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*80159388 00156188*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015938C 0015618C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80159390 00156190*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80159394 00156194*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80159398 00156198*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015939C 0015619C*/ PPC::Runtime::ASM::extsb(context->r4, context->r28);
/*801593A0 001561A0*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x784);
/*801593A4 001561A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*801593A8 001561A8*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r0);
/*801593AC 001561AC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801593B0 001561B0*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*801593B4 001561B4*/ PPC::Runtime::ASM::beq(.L_8015943C);
/*801593B8 001561B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*801593BC 001561BC*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*801593C0 001561C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801593C4 001561C4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*801593C8 001561C8*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*801593CC 001561CC*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r3));
/*801593D0 001561D0*/ PPC::Runtime::ASM::beq(.L_80159400);
/*801593D4 001561D4*/ PPC::Runtime::ASM::bge(.L_801593E4);
/*801593D8 001561D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801593DC 001561DC*/ PPC::Runtime::ASM::bge(.L_801593F0);
/*801593E0 001561E0*/ PPC::Runtime::ASM::b(.L_8015940C);
RUNTIME_PPC_JUMP_LABEL(.L_801593E4, 0x801593E4) //this is a jump label
/*801593E4 001561E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*801593E8 001561E8*/ PPC::Runtime::ASM::bge(.L_8015940C);
/*801593EC 001561EC*/ PPC::Runtime::ASM::b(.L_80159408);
RUNTIME_PPC_JUMP_LABEL(.L_801593F0, 0x801593F0) //this is a jump label
/*801593F0 001561F0*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0xa);
/*801593F4 001561F4*/ PPC::Runtime::ASM::extsb(context->r3, context->r30);
/*801593F8 001561F8*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*801593FC 001561FC*/ PPC::Runtime::ASM::b(.L_8015940C);
RUNTIME_PPC_JUMP_LABEL(.L_80159400, 0x80159400) //this is a jump label
/*80159400 00156200*/ PPC::Runtime::ASM::li(context->r31, 0x28);
/*80159404 00156204*/ PPC::Runtime::ASM::b(.L_8015940C);
RUNTIME_PPC_JUMP_LABEL(.L_80159408, 0x80159408) //this is a jump label
/*80159408 00156208*/ PPC::Runtime::ASM::li(context->r31, 0x32);
RUNTIME_PPC_JUMP_LABEL(.L_8015940C, 0x8015940C) //this is a jump label
/*8015940C 0015620C*/ PPC::Runtime::ASM::xoris(context->r3, context->r31, 0x8000);
/*80159410 00156210*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80159414 00156214*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80159418 00156218*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8015941C 0015621C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80159420 00156220*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0838 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80159424 00156224*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80159428 00156228*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
/*8015942C 0015622C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*80159430 00156230*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80159434 00156234*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0830 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80159438 00156238*/ PPC::Runtime::ASM::bl(fn_801389D8);
RUNTIME_PPC_JUMP_LABEL(.L_8015943C, 0x8015943C) //this is a jump label
/*8015943C 0015623C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80159440 00156240*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80159444 00156244*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80159448 00156248*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015944C 0015624C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80159450 00156250*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80159454 00156254*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80159458 00156258*/ PPC::Runtime::ASM::blr();
}