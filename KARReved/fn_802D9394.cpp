//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8036E92C.hpp"
#include "fn_802DAED8.hpp"
#include "fn_803792B8.hpp"
#include "fn_8037B33C.hpp"



void fn_802D9394(PPC::Runtime::GCContext* context)
{
/*802D9394 002D6194*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x220, context->r1));
/*802D9398 002D6198*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D939C 002D619C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r1));
/*802D93A0 002D61A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r1));
/*802D93A4 002D61A4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802D93A8 002D61A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802D93AC 002D61AC*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x4);
/*802D93B0 002D61B0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802D93B4 002D61B4*/ PPC::Runtime::ASM::beq(.L_802D9594);
/*802D93B8 002D61B8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*802D93BC 002D61BC*/ PPC::Runtime::ASM::bl(fn_8036E92C);
/*802D93C0 002D61C0*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x10);
/*802D93C4 002D61C4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802D93C8 002D61C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D93CC 002D61CC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x4);
/*802D93D0 002D61D0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*802D93D4 002D61D4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*802D93D8 002D61D8*/ PPC::Runtime::ASM::bl(fn_802DAED8);
/*802D93DC 002D61DC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF288 @ Get_MemoryOffset_HighBit);
/*802D93E0 002D61E0*/ PPC::Runtime::ASM::addic.(context->r3, context->r1, 0x1f8);
/*802D93E4 002D61E4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF288 @ Get_MemoryOffset_LowBit);
/*802D93E8 002D61E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D93EC 002D61EC*/ PPC::Runtime::ASM::beq(.L_802D9420);
/*802D93F0 002D61F0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE210 @ Get_MemoryOffset_HighBit);
/*802D93F4 002D61F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D93F8 002D61F8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE210 @ Get_MemoryOffset_LowBit);
/*802D93FC 002D61FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D9400 002D6200*/ PPC::Runtime::ASM::beq(.L_802D9420);
/*802D9404 002D6204*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE238 @ Get_MemoryOffset_HighBit);
/*802D9408 002D6208*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE238 @ Get_MemoryOffset_LowBit);
/*802D940C 002D620C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D9410 002D6210*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D9414 002D6214*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802D9418 002D6218*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D941C 002D621C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D9420, 0x802D9420) //this is a jump label
/*802D9420 002D6220*/ PPC::Runtime::ASM::addic.(context->r31, context->r1, 0x1bc);
/*802D9424 002D6224*/ PPC::Runtime::ASM::beq(.L_802D9470);
/*802D9428 002D6228*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*802D942C 002D622C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*802D9430 002D6230*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802D9434 002D6234*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r1));
/*802D9438 002D6238*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*802D943C 002D623C*/ PPC::Runtime::ASM::beq(.L_802D9448);
/*802D9440 002D6240*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D9444 002D6244*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_802D9448, 0x802D9448) //this is a jump label
/*802D9448 002D6248*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*802D944C 002D624C*/ PPC::Runtime::ASM::beq(.L_802D9470);
/*802D9450 002D6250*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*802D9454 002D6254*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802D9458 002D6258*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*802D945C 002D625C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802D9460 002D6260*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802D9464 002D6264*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802D9468 002D6268*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D946C 002D626C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D9470, 0x802D9470) //this is a jump label
/*802D9470 002D6270*/ PPC::Runtime::ASM::addic.(context->r3, context->r1, 0x194);
/*802D9474 002D6274*/ PPC::Runtime::ASM::beq(.L_802D94A8);
/*802D9478 002D6278*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF260 @ Get_MemoryOffset_HighBit);
/*802D947C 002D627C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D9480 002D6280*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF260 @ Get_MemoryOffset_LowBit);
/*802D9484 002D6284*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D9488 002D6288*/ PPC::Runtime::ASM::beq(.L_802D94A8);
/*802D948C 002D628C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF238 @ Get_MemoryOffset_HighBit);
/*802D9490 002D6290*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF238 @ Get_MemoryOffset_LowBit);
/*802D9494 002D6294*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D9498 002D6298*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D949C 002D629C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802D94A0 002D62A0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D94A4 002D62A4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D94A8, 0x802D94A8) //this is a jump label
/*802D94A8 002D62A8*/ PPC::Runtime::ASM::addic.(context->r3, context->r1, 0x148);
/*802D94AC 002D62AC*/ PPC::Runtime::ASM::beq(.L_802D950C);
/*802D94B0 002D62B0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF1B0 @ Get_MemoryOffset_HighBit);
/*802D94B4 002D62B4*/ PPC::Runtime::ASM::addic.(context->r5, context->r1, 0x16c);
/*802D94B8 002D62B8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BF1B0 @ Get_MemoryOffset_LowBit);
/*802D94BC 002D62BC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D94C0 002D62C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x38);
/*802D94C4 002D62C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r1));
/*802D94C8 002D62C8*/ PPC::Runtime::ASM::beq(.L_802D94D8);
/*802D94CC 002D62CC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF3C0 @ Get_MemoryOffset_HighBit);
/*802D94D0 002D62D0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF3C0 @ Get_MemoryOffset_LowBit);
/*802D94D4 002D62D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802D94D8, 0x802D94D8) //this is a jump label
/*802D94D8 002D62D8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D94DC 002D62DC*/ PPC::Runtime::ASM::beq(.L_802D950C);
/*802D94E0 002D62E0*/ PPC::Runtime::ASM::lis(context->r4, FuncPtrList_2 @ Get_MemoryOffset_HighBit);
/*802D94E4 002D62E4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, FuncPtrList_2 @ Get_MemoryOffset_LowBit);
/*802D94E8 002D62E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D94EC 002D62EC*/ PPC::Runtime::ASM::beq(.L_802D950C);
/*802D94F0 002D62F0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF4DC @ Get_MemoryOffset_HighBit);
/*802D94F4 002D62F4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF4DC @ Get_MemoryOffset_LowBit);
/*802D94F8 002D62F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D94FC 002D62FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D9500 002D6300*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802D9504 002D6304*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D9508 002D6308*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D950C, 0x802D950C) //this is a jump label
/*802D950C 002D630C*/ PPC::Runtime::ASM::addic.(context->r31, context->r1, 0xfc);
/*802D9510 002D6310*/ PPC::Runtime::ASM::beq(.L_802D9554);
/*802D9514 002D6314*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*802D9518 002D6318*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802D951C 002D631C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*802D9520 002D6320*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802D9524 002D6324*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802D9528 002D6328*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*802D952C 002D632C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*802D9530 002D6330*/ PPC::Runtime::ASM::beq(.L_802D9554);
/*802D9534 002D6334*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*802D9538 002D6338*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802D953C 002D633C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*802D9540 002D6340*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802D9544 002D6344*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802D9548 002D6348*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802D954C 002D634C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D9550 002D6350*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D9554, 0x802D9554) //this is a jump label
/*802D9554 002D6354*/ PPC::Runtime::ASM::addic.(context->r4, context->r1, 0x9c);
/*802D9558 002D6358*/ PPC::Runtime::ASM::beq(.L_802D9578);
/*802D955C 002D635C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4E38 @ Get_MemoryOffset_HighBit);
/*802D9560 002D6360*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F4E38 @ Get_MemoryOffset_LowBit);
/*802D9564 002D6364*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802D9568 002D6368*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802D956C 002D636C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D9570 002D6370*/ PPC::Runtime::ASM::beq(.L_802D9578);
/*802D9574 002D6374*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
RUNTIME_PPC_JUMP_LABEL(.L_802D9578, 0x802D9578) //this is a jump label
/*802D9578 002D6378*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF0E4 @ Get_MemoryOffset_HighBit);
/*802D957C 002D637C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*802D9580 002D6380*/ PPC::Runtime::ASM::addi(context->r12, context->r4, lbl_804BF0E4 @ Get_MemoryOffset_LowBit);
/*802D9584 002D6384*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D9588 002D6388*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802D958C 002D638C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D9590 002D6390*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D9594, 0x802D9594) //this is a jump label
/*802D9594 002D6394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r1));
/*802D9598 002D6398*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r1));
/*802D959C 002D639C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D95A0 002D63A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x220);
/*802D95A4 002D63A4*/ PPC::Runtime::ASM::blr();
}