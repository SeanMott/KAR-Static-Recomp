//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_modf(PPC::Runtime::GCContext* context)
{
/*803BD13C 003B9F3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803BD140 003B9F40*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BD144 003B9F44*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BD148 003B9F48*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BD14C 003B9F4C*/ PPC::Runtime::ASM::extrwi(context->r4, context->r5, 11, 1);
/*803BD150 003B9F50*/ PPC::Runtime::ASM::subi(context->r7, context->r4, 0x3ff);
/*803BD154 003B9F54*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x14);
/*803BD158 003B9F58*/ PPC::Runtime::ASM::bge(.L_803BD1C8);
/*803BD15C 003B9F5C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*803BD160 003B9F60*/ PPC::Runtime::ASM::bge(.L_803BD178);
/*803BD164 003B9F64*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r5, 31);
/*803BD168 003B9F68*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803BD16C 003B9F6C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803BD170 003B9F70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803BD174 003B9F74*/ PPC::Runtime::ASM::b(.L_803BD230);
RUNTIME_PPC_JUMP_LABEL(.L_803BD178, 0x803BD178) //this is a jump label
/*803BD178 003B9F78*/ PPC::Runtime::ASM::lis(context->r4, 0x10);
/*803BD17C 003B9F7C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*803BD180 003B9F80*/ PPC::Runtime::ASM::sraw(context->r4, context->r0, context->r7);
/*803BD184 003B9F84*/ PPC::Runtime::ASM::and(context->r0, context->r5, context->r4);
/*803BD188 003B9F88*/ PPC::Runtime::ASM::or.(context->r0, context->r6, context->r0);
/*803BD18C 003B9F8C*/ PPC::Runtime::ASM::bne(.L_803BD1AC);
/*803BD190 003B9F90*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r5, 31);
/*803BD194 003B9F94*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803BD198 003B9F98*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BD19C 003B9F9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BD1A0 003B9FA0*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803BD1A4 003B9FA4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BD1A8 003B9FA8*/ PPC::Runtime::ASM::b(.L_803BD230);
RUNTIME_PPC_JUMP_LABEL(.L_803BD1AC, 0x803BD1AC) //this is a jump label
/*803BD1AC 003B9FAC*/ PPC::Runtime::ASM::andc(context->r4, context->r5, context->r4);
/*803BD1B0 003B9FB0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803BD1B4 003B9FB4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803BD1B8 003B9FB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803BD1BC 003B9FBC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803BD1C0 003B9FC0*/ PPC::Runtime::ASM::fsub(context->f1, context->f1, context->f0);
/*803BD1C4 003B9FC4*/ PPC::Runtime::ASM::b(.L_803BD230);
RUNTIME_PPC_JUMP_LABEL(.L_803BD1C8, 0x803BD1C8) //this is a jump label
/*803BD1C8 003B9FC8*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x33);
/*803BD1CC 003B9FCC*/ PPC::Runtime::ASM::ble(.L_803BD1EC);
/*803BD1D0 003B9FD0*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r5, 31);
/*803BD1D4 003B9FD4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803BD1D8 003B9FD8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BD1DC 003B9FDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BD1E0 003B9FE0*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803BD1E4 003B9FE4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BD1E8 003B9FE8*/ PPC::Runtime::ASM::b(.L_803BD230);
RUNTIME_PPC_JUMP_LABEL(.L_803BD1EC, 0x803BD1EC) //this is a jump label
/*803BD1EC 003B9FEC*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x14);
/*803BD1F0 003B9FF0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*803BD1F4 003B9FF4*/ PPC::Runtime::ASM::srw(context->r4, context->r4, context->r0);
/*803BD1F8 003B9FF8*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r4);
/*803BD1FC 003B9FFC*/ PPC::Runtime::ASM::bne(.L_803BD21C);
/*803BD200 003BA000*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r5, 31);
/*803BD204 003BA004*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803BD208 003BA008*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BD20C 003BA00C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BD210 003BA010*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803BD214 003BA014*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BD218 003BA018*/ PPC::Runtime::ASM::b(.L_803BD230);
RUNTIME_PPC_JUMP_LABEL(.L_803BD21C, 0x803BD21C) //this is a jump label
/*803BD21C 003BA01C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803BD220 003BA020*/ PPC::Runtime::ASM::andc(context->r0, context->r6, context->r4);
/*803BD224 003BA024*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803BD228 003BA028*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803BD22C 003BA02C*/ PPC::Runtime::ASM::fsub(context->f1, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_803BD230, 0x803BD230) //this is a jump label
/*803BD230 003BA030*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803BD234 003BA034*/ PPC::Runtime::ASM::blr();
}