//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_WriteSramCallback.hpp"
#include "fn_WriteSramCallback.hpp"
#include "EXILock.hpp"
#include "EXISelect.hpp"
#include "EXIUnlock.hpp"
#include "EXIImm.hpp"
#include "EXISync.hpp"
#include "fn_EXIImmEx.hpp"
#include "EXIDeselect.hpp"
#include "EXIUnlock.hpp"



void fn_WriteSram(PPC::Runtime::GCContext* context)
{
/*803D8E08 003D5C08*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D8E0C 003D5C0C*/ PPC::Runtime::ASM::lis(context->r6, fn_WriteSramCallback @ Get_MemoryOffset_HighBit);
/*803D8E10 003D5C10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D8E14 003D5C14*/ PPC::Runtime::ASM::addi(context->r0, context->r6, fn_WriteSramCallback @ Get_MemoryOffset_LowBit);
/*803D8E18 003D5C18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*803D8E1C 003D5C1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D8E20 003D5C20*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x0);
/*803D8E24 003D5C24*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803D8E28 003D5C28*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D8E2C 003D5C2C*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x0);
/*803D8E30 003D5C30*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*803D8E34 003D5C34*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D8E38 003D5C38*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803D8E3C 003D5C3C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D8E40 003D5C40*/ PPC::Runtime::ASM::bl(EXILock);
/*803D8E44 003D5C44*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803D8E48 003D5C48*/ PPC::Runtime::ASM::bne(.L_803D8E54);
/*803D8E4C 003D5C4C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D8E50 003D5C50*/ PPC::Runtime::ASM::b(.L_803D8F04);
RUNTIME_PPC_JUMP_LABEL(.L_803D8E54, 0x803D8E54) //this is a jump label
/*803D8E54 003D5C54*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D8E58 003D5C58*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803D8E5C 003D5C5C*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*803D8E60 003D5C60*/ PPC::Runtime::ASM::bl(EXISelect);
/*803D8E64 003D5C64*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803D8E68 003D5C68*/ PPC::Runtime::ASM::bne(.L_803D8E7C);
/*803D8E6C 003D5C6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D8E70 003D5C70*/ PPC::Runtime::ASM::bl(EXIUnlock);
/*803D8E74 003D5C74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D8E78 003D5C78*/ PPC::Runtime::ASM::b(.L_803D8F04);
RUNTIME_PPC_JUMP_LABEL(.L_803D8E7C, 0x803D8E7C) //this is a jump label
/*803D8E7C 003D5C7C*/ PPC::Runtime::ASM::slwi(context->r31, context->r31, 6);
/*803D8E80 003D5C80*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x100);
/*803D8E84 003D5C84*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0xa000);
/*803D8E88 003D5C88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D8E8C 003D5C8C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*803D8E90 003D5C90*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D8E94 003D5C94*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*803D8E98 003D5C98*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*803D8E9C 003D5C9C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803D8EA0 003D5CA0*/ PPC::Runtime::ASM::bl(EXIImm);
/*803D8EA4 003D5CA4*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803D8EA8 003D5CA8*/ PPC::Runtime::ASM::srwi(context->r31, context->r0, 5);
/*803D8EAC 003D5CAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D8EB0 003D5CB0*/ PPC::Runtime::ASM::bl(EXISync);
/*803D8EB4 003D5CB4*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803D8EB8 003D5CB8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803D8EBC 003D5CBC*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/*803D8EC0 003D5CC0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*803D8EC4 003D5CC4*/ PPC::Runtime::ASM::or(context->r31, context->r31, context->r0);
/*803D8EC8 003D5CC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D8ECC 003D5CCC*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*803D8ED0 003D5CD0*/ PPC::Runtime::ASM::bl(fn_EXIImmEx);
/*803D8ED4 003D5CD4*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803D8ED8 003D5CD8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803D8EDC 003D5CDC*/ PPC::Runtime::ASM::or(context->r31, context->r31, context->r0);
/*803D8EE0 003D5CE0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D8EE4 003D5CE4*/ PPC::Runtime::ASM::bl(EXIDeselect);
/*803D8EE8 003D5CE8*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803D8EEC 003D5CEC*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803D8EF0 003D5CF0*/ PPC::Runtime::ASM::or(context->r31, context->r31, context->r0);
/*803D8EF4 003D5CF4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D8EF8 003D5CF8*/ PPC::Runtime::ASM::bl(EXIUnlock);
/*803D8EFC 003D5CFC*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r31);
/*803D8F00 003D5D00*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
RUNTIME_PPC_JUMP_LABEL(.L_803D8F04, 0x803D8F04) //this is a jump label
/*803D8F04 003D5D04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803D8F08 003D5D08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D8F0C 003D5D0C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D8F10 003D5D10*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D8F14 003D5D14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*803D8F18 003D5D18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D8F1C 003D5D1C*/ PPC::Runtime::ASM::blr();
}