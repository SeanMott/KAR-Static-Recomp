//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_803F0F68(PPC::Runtime::GCContext* context)
{
/*803F0F68 003EDD68*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F0F6C 003EDD6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803F0F70 003EDD70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803F0F74 003EDD74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F0F78 003EDD78*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803F0F7C 003EDD7C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803F0F80 003EDD80*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*803F0F84 003EDD84*/ PPC::Runtime::ASM::lis(context->r4, 0xcccd);
/*803F0F88 003EDD88*/ PPC::Runtime::ASM::lis(context->r5, 0x8889);
/*803F0F8C 003EDD8C*/ PPC::Runtime::ASM::subi(context->r0, context->r6, 0x5);
/*803F0F90 003EDD90*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 5);
/*803F0F94 003EDD94*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x140);
/*803F0F98 003EDD98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*803F0F9C 003EDD9C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803F0FA0 003EDDA0*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x3333);
/*803F0FA4 003EDDA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*803F0FA8 003EDDA8*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x7777);
/*803F0FAC 003EDDAC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*803F0FB0 003EDDB0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*803F0FB4 003EDDB4*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x1);
/*803F0FB8 003EDDB8*/ PPC::Runtime::ASM::mulli(context->r5, context->r5, 0xa0);
/*803F0FBC 003EDDBC*/ PPC::Runtime::ASM::add(context->r5, context->r6, context->r5);
/*803F0FC0 003EDDC0*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r0, context->r5);
/*803F0FC4 003EDDC4*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 8);
/*803F0FC8 003EDDC8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x1e0);
/*803F0FCC 003EDDCC*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r5);
/*803F0FD0 003EDDD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*803F0FD4 003EDDD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*803F0FD8 003EDDD8*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r4, context->r0);
/*803F0FDC 003EDDDC*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 2);
/*803F0FE0 003EDDE0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*803F0FE4 003EDDE4*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 1);
/*803F0FE8 003EDDE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*803F0FEC 003EDDEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*803F0FF0 003EDDF0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 1);
/*803F0FF4 003EDDF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803F0FF8 003EDDF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*803F0FFC 003EDDFC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*803F1000 003EDE00*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x5);
/*803F1004 003EDE04*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 16);
/*803F1008 003EDE08*/ PPC::Runtime::ASM::divwu(context->r0, context->r4, context->r0);
/*803F100C 003EDE0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*803F1010 003EDE10*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803F1014 003EDE14*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803F1018 003EDE18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803F101C 003EDE1C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F1020 003EDE20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803F1024 003EDE24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F1028 003EDE28*/ PPC::Runtime::ASM::blr();
}