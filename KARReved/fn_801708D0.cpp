//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800547E0.hpp"
#include "fn_80138B10.hpp"
#include "fn_800550F4.hpp"



void fn_801708D0(PPC::Runtime::GCContext* context)
{
/*801708D0 0016D6D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801708D4 0016D6D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801708D8 0016D6D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801708DC 0016D6DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801708E0 0016D6E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801708E4 0016D6E4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801708E8 0016D6E8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801708EC 0016D6EC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801708F0 0016D6F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*801708F4 0016D6F4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801708F8 0016D6F8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*801708FC 0016D6FC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80170900 0016D700*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80170904 0016D704*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80170908 0016D708*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8017090C 0016D70C*/ PPC::Runtime::ASM::bne(.L_80170954);
/*80170910 0016D710*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80170914 0016D714*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*80170918 0016D718*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8017091C 0016D71C*/ PPC::Runtime::ASM::bne(.L_80170954);
/*80170920 0016D720*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80170924 0016D724*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0BC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80170928 0016D728*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8017092C 0016D72C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80170930 0016D730*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0BC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80170934 0016D734*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80170938 0016D738*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r31));
/*8017093C 0016D73C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80170940 0016D740*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80170944 0016D744*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80170948 0016D748*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8017094C 0016D74C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80170950 0016D750*/ PPC::Runtime::ASM::bl(fn_800550F4);
RUNTIME_PPC_JUMP_LABEL(.L_80170954, 0x80170954) //this is a jump label
/*80170954 0016D754*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80170958 0016D758*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017095C 0016D75C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80170960 0016D760*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170964 0016D764*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80170968 0016D768*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8017096C 0016D76C*/ PPC::Runtime::ASM::blr();
}