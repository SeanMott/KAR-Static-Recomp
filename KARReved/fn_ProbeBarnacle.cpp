//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_EXIAttach.hpp"
#include "EXILock.hpp"
#include "EXISelect.hpp"
#include "EXIImm.hpp"
#include "EXISync.hpp"
#include "EXIImm.hpp"
#include "EXISync.hpp"
#include "EXIDeselect.hpp"
#include "EXIUnlock.hpp"
#include "fn_EXIDetach.hpp"



void fn_ProbeBarnacle(PPC::Runtime::GCContext* context)
{
/*803EBA58 003E8858*/ PPC::Runtime::ASM::mflr(context->r0);
/*803EBA5C 003E885C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803EBA60 003E8860*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*803EBA64 003E8864*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803EBA68 003E8868*/ PPC::Runtime::ASM::addi(context->r31, context->r5, 0x0);
/*803EBA6C 003E886C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803EBA70 003E8870*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*803EBA74 003E8874*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803EBA78 003E8878*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803EBA7C 003E887C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*803EBA80 003E8880*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803EBA84 003E8884*/ PPC::Runtime::ASM::beq(.L_803EBAAC);
/*803EBA88 003E8888*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803EBA8C 003E888C*/ PPC::Runtime::ASM::bne(.L_803EBAAC);
/*803EBA90 003E8890*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803EBA94 003E8894*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803EBA98 003E8898*/ PPC::Runtime::ASM::bl(fn_EXIAttach);
/*803EBA9C 003E889C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803EBAA0 003E88A0*/ PPC::Runtime::ASM::bne(.L_803EBAAC);
/*803EBAA4 003E88A4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803EBAA8 003E88A8*/ PPC::Runtime::ASM::b(.L_803EBBC4);
RUNTIME_PPC_JUMP_LABEL(.L_803EBAAC, 0x803EBAAC) //this is a jump label
/*803EBAAC 003E88AC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803EBAB0 003E88B0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x0);
/*803EBAB4 003E88B4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803EBAB8 003E88B8*/ PPC::Runtime::ASM::bl(EXILock);
/*803EBABC 003E88BC*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803EBAC0 003E88C0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/* 803EBAC4 003E88C4  7C 1C 03 79 */ mr. context->r28 , context->r0
/*803EBAC8 003E88C8*/ PPC::Runtime::ASM::bne(.L_803EBB80);
/*803EBACC 003E88CC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803EBAD0 003E88D0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x0);
/*803EBAD4 003E88D4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803EBAD8 003E88D8*/ PPC::Runtime::ASM::bl(EXISelect);
/*803EBADC 003E88DC*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803EBAE0 003E88E0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/* 803EBAE4 003E88E4  7C 1C 03 79 */ mr. context->r28 , context->r0
/*803EBAE8 003E88E8*/ PPC::Runtime::ASM::bne(.L_803EBB78);
/*803EBAEC 003E88EC*/ PPC::Runtime::ASM::lis(context->r3, 0x2001);
/*803EBAF0 003E88F0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1300);
/*803EBAF4 003E88F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803EBAF8 003E88F8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803EBAFC 003E88FC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*803EBB00 003E8900*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*803EBB04 003E8904*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*803EBB08 003E8908*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803EBB0C 003E890C*/ PPC::Runtime::ASM::bl(EXIImm);
/*803EBB10 003E8910*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803EBB14 003E8914*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803EBB18 003E8918*/ PPC::Runtime::ASM::srwi(context->r28, context->r0, 5);
/*803EBB1C 003E891C*/ PPC::Runtime::ASM::bl(EXISync);
/*803EBB20 003E8920*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803EBB24 003E8924*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803EBB28 003E8928*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803EBB2C 003E892C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*803EBB30 003E8930*/ PPC::Runtime::ASM::or(context->r28, context->r28, context->r0);
/*803EBB34 003E8934*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*803EBB38 003E8938*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803EBB3C 003E893C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803EBB40 003E8940*/ PPC::Runtime::ASM::bl(EXIImm);
/*803EBB44 003E8944*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803EBB48 003E8948*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803EBB4C 003E894C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803EBB50 003E8950*/ PPC::Runtime::ASM::or(context->r28, context->r28, context->r0);
/*803EBB54 003E8954*/ PPC::Runtime::ASM::bl(EXISync);
/*803EBB58 003E8958*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803EBB5C 003E895C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803EBB60 003E8960*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803EBB64 003E8964*/ PPC::Runtime::ASM::or(context->r28, context->r28, context->r0);
/*803EBB68 003E8968*/ PPC::Runtime::ASM::bl(EXIDeselect);
/*803EBB6C 003E896C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803EBB70 003E8970*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803EBB74 003E8974*/ PPC::Runtime::ASM::or(context->r28, context->r28, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803EBB78, 0x803EBB78) //this is a jump label
/*803EBB78 003E8978*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803EBB7C 003E897C*/ PPC::Runtime::ASM::bl(EXIUnlock);
RUNTIME_PPC_JUMP_LABEL(.L_803EBB80, 0x803EBB80) //this is a jump label
/*803EBB80 003E8980*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*803EBB84 003E8984*/ PPC::Runtime::ASM::beq(.L_803EBB98);
/*803EBB88 003E8988*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803EBB8C 003E898C*/ PPC::Runtime::ASM::bne(.L_803EBB98);
/*803EBB90 003E8990*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803EBB94 003E8994*/ PPC::Runtime::ASM::bl(fn_EXIDetach);
RUNTIME_PPC_JUMP_LABEL(.L_803EBB98, 0x803EBB98) //this is a jump label
/*803EBB98 003E8998*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*803EBB9C 003E899C*/ PPC::Runtime::ASM::beq(.L_803EBBA8);
/*803EBBA0 003E89A0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803EBBA4 003E89A4*/ PPC::Runtime::ASM::b(.L_803EBBC4);
RUNTIME_PPC_JUMP_LABEL(.L_803EBBA8, 0x803EBBA8) //this is a jump label
/*803EBBA8 003E89A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803EBBAC 003E89AC*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x1);
/*803EBBB0 003E89B0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*803EBBB4 003E89B4*/ PPC::Runtime::ASM::beq(.L_803EBBC0);
/*803EBBB8 003E89B8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803EBBBC 003E89BC*/ PPC::Runtime::ASM::b(.L_803EBBC4);
RUNTIME_PPC_JUMP_LABEL(.L_803EBBC0, 0x803EBBC0) //this is a jump label
/*803EBBC0 003E89C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803EBBC4, 0x803EBBC4) //this is a jump label
/*803EBBC4 003E89C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803EBBC8 003E89C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803EBBCC 003E89CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803EBBD0 003E89D0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803EBBD4 003E89D4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803EBBD8 003E89D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*803EBBDC 003E89DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803EBBE0 003E89E0*/ PPC::Runtime::ASM::blr();
}