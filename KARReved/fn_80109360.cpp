//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F7E70.hpp"
#include "fn_800D7954.hpp"
#include "fn_800D7954.hpp"
#include "fn_800D7AD0.hpp"



void fn_80109360(PPC::Runtime::GCContext* context)
{
/*80109360 00106160*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80109364 00106164*/ PPC::Runtime::ASM::mflr(context->r0);
/*80109368 00106168*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8010936C 0010616C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80109370 00106170*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*80109374 00106174*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80109378 00106178*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8010937C 0010617C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*80109380 00106180*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80109384 00106184*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80109388 00106188*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8010938C 0010618C*/ PPC::Runtime::ASM::beq(.L_80109440);
/*80109390 00106190*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109394 00106194*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80109398 00106198*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8010939C 0010619C*/ PPC::Runtime::ASM::addi(context->r31, context->r5, 0x54);
/*801093A0 001061A0*/ PPC::Runtime::ASM::bl(fn_800F7E70);
/*801093A4 001061A4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*801093A8 001061A8*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*801093AC 001061AC*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x164, context->r25));
/*801093B0 001061B0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801093B4 001061B4*/ PPC::Runtime::ASM::b(.L_80109434);
RUNTIME_PPC_JUMP_LABEL(.L_801093B8, 0x801093B8) //this is a jump label
/* 801093B8 001061B8  57 60 07 FF */ clrlwi. context->r0 , context->r27 , 31
/*801093BC 001061BC*/ PPC::Runtime::ASM::beq(.L_801093E8);
/*801093C0 001061C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801093C4 001061C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801093C8 001061C8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r28));
/*801093CC 001061CC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r30);
/*801093D0 001061D0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801093D4 001061D4*/ PPC::Runtime::ASM::lwzx(context->r4, context->r5, context->r0);
/*801093D8 001061D8*/ PPC::Runtime::ASM::mr(context->r24, context->r4);
/*801093DC 001061DC*/ PPC::Runtime::ASM::bl(fn_800D7954);
/*801093E0 001061E0*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*801093E4 001061E4*/ PPC::Runtime::ASM::b(.L_80109410);
RUNTIME_PPC_JUMP_LABEL(.L_801093E8, 0x801093E8) //this is a jump label
/*801093E8 001061E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801093EC 001061EC*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x4);
/*801093F0 001061F0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r28));
/*801093F4 001061F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801093F8 001061F8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*801093FC 001061FC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80109400 00106200*/ PPC::Runtime::ASM::lwzx(context->r4, context->r5, context->r0);
/*80109404 00106204*/ PPC::Runtime::ASM::mr(context->r24, context->r4);
/*80109408 00106208*/ PPC::Runtime::ASM::bl(fn_800D7954);
/*8010940C 0010620C*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80109410, 0x80109410) //this is a jump label
/*80109410 00106210*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80109414 00106214*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80109418 00106218*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8010941C 0010621C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80109420 00106220*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80109424 00106224*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
/*80109428 00106228*/ PPC::Runtime::ASM::srwi(context->r27, context->r27, 1);
/*8010942C 0010622C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x10);
/*80109430 00106230*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80109434, 0x80109434) //this is a jump label
/*80109434 00106234*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80109438 00106238*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*8010943C 0010623C*/ PPC::Runtime::ASM::blt(.L_801093B8);
RUNTIME_PPC_JUMP_LABEL(.L_80109440, 0x80109440) //this is a jump label
/*80109440 00106240*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80109444 00106244*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*80109448 00106248*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8010944C 0010624C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80109450 00106250*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80109454 00106254*/ PPC::Runtime::ASM::blr();
}