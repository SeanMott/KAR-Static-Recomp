//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80068588.hpp"
#include "fn_800685AC.hpp"
#include "fn_80068574.hpp"



void fn_801253FC(PPC::Runtime::GCContext* context)
{
/*801253FC 001221FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80125400 00122200*/ PPC::Runtime::ASM::mflr(context->r0);
/*80125404 00122204*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80125408 00122208*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012540C 0012220C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80125410 00122210*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80125414 00122214*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80125418 00122218*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8012541C 0012221C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80125420 00122220*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 80125424 00122224  54 60 FF FF */ extrwi. context->r0 , context->r3 , 1 , 30
/*80125428 00122228*/ PPC::Runtime::ASM::beq(.L_801254D8);
/*8012542C 0012222C*/ PPC::Runtime::ASM::extrwi(context->r31, context->r3, 2, 28);
/*80125430 00122230*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80125434 00122234*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80125438 00122238*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8012543C 0012223C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80125440 00122240*/ PPC::Runtime::ASM::beq(.L_80125454);
/*80125444 00122244*/ PPC::Runtime::ASM::blt(.L_801254A8);
/*80125448 00122248*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*8012544C 0012224C*/ PPC::Runtime::ASM::bge(.L_801254A8);
/*80125450 00122250*/ PPC::Runtime::ASM::b(.L_80125480);
RUNTIME_PPC_JUMP_LABEL(.L_80125454, 0x80125454) //this is a jump label
/*80125454 00122254*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80125458 00122258*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8012545C 0012225C*/ PPC::Runtime::ASM::bl(fn_80068588);
/*80125460 00122260*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80125464 00122264*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*80125468 00122268*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012546C 0012226C*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80125470 00122270*/ PPC::Runtime::ASM::subf(context->r6, context->r4, context->r0);
/*80125474 00122274*/ PPC::Runtime::ASM::subf(context->r5, context->r3, context->r5);
/*80125478 00122278*/ PPC::Runtime::ASM::bl(fn_GXSetScissor);
/*8012547C 0012227C*/ PPC::Runtime::ASM::b(.L_801254A8);
RUNTIME_PPC_JUMP_LABEL(.L_80125480, 0x80125480) //this is a jump label
/*80125480 00122280*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80125484 00122284*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80125488 00122288*/ PPC::Runtime::ASM::bl(fn_800685AC);
/*8012548C 0012228C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80125490 00122290*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*80125494 00122294*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80125498 00122298*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8012549C 0012229C*/ PPC::Runtime::ASM::subf(context->r6, context->r4, context->r0);
/*801254A0 001222A0*/ PPC::Runtime::ASM::subf(context->r5, context->r3, context->r5);
/*801254A4 001222A4*/ PPC::Runtime::ASM::bl(fn_GXSetScissor);
RUNTIME_PPC_JUMP_LABEL(.L_801254A8, 0x801254A8) //this is a jump label
/*801254A8 001222A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801254AC 001222AC*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801254B0 001222B0*/ PPC::Runtime::ASM::bl(fn_GXLink_Common);
/*801254B4 001222B4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801254B8 001222B8*/ PPC::Runtime::ASM::bl(fn_80068574);
/*801254BC 001222BC*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801254C0 001222C0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*801254C4 001222C4*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801254C8 001222C8*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*801254CC 001222CC*/ PPC::Runtime::ASM::subf(context->r6, context->r4, context->r0);
/*801254D0 001222D0*/ PPC::Runtime::ASM::subf(context->r5, context->r3, context->r5);
/*801254D4 001222D4*/ PPC::Runtime::ASM::bl(fn_GXSetScissor);
RUNTIME_PPC_JUMP_LABEL(.L_801254D8, 0x801254D8) //this is a jump label
/*801254D8 001222D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801254DC 001222DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801254E0 001222E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801254E4 001222E4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801254E8 001222E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801254EC 001222EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801254F0 001222F0*/ PPC::Runtime::ASM::blr();
}