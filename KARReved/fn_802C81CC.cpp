//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802C81CC(PPC::Runtime::GCContext* context)
{
/*802C81CC 002C4FCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802C81D0 002C4FD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802C81D4 002C4FD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802C81D8 002C4FD8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*802C81DC 002C4FDC*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*802C81E0 002C4FE0*/ PPC::Runtime::ASM::lis(context->r5, StructWithStructs_1 @ Get_MemoryOffset_HighBit);
/*802C81E4 002C4FE4*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*802C81E8 002C4FE8*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*802C81EC 002C4FEC*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x8);
/*802C81F0 002C4FF0*/ PPC::Runtime::ASM::addi(context->r31, context->r5, StructWithStructs_1 @ Get_MemoryOffset_LowBit);
/*802C81F4 002C4FF4*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*802C81F8 002C4FF8*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802C81FC, 0x802C81FC) //this is a jump label
/*802C81FC 002C4FFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*802C8200 002C5000*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x58);
/*802C8204 002C5004*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802C8208 002C5008*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/*802C820C 002C500C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802C8210 002C5010*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*802C8214 002C5014*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802C8218 002C5018*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802C821C 002C501C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*802C8220 002C5020*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802C8224 002C5024*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802C8228 002C5028*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802C822C 002C502C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802C8230 002C5030*/ PPC::Runtime::ASM::bge(.L_802C8254);
/* 802C8234 002C5034  57 60 06 3F */ clrlwi. context->r0 , context->r27 , 24
/*802C8238 002C5038*/ PPC::Runtime::ASM::bne(.L_802C8254);
/*802C823C 002C503C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r26));
/*802C8240 002C5040*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802C8244 002C5044*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802C8248 002C5048*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*802C824C 002C504C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*802C8250 002C5050*/ PPC::Runtime::ASM::b(.L_802C8268);
RUNTIME_PPC_JUMP_LABEL(.L_802C8254, 0x802C8254) //this is a jump label
/*802C8254 002C5054*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r26));
/*802C8258 002C5058*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802C825C 002C505C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802C8260 002C5060*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*802C8264 002C5064*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
RUNTIME_PPC_JUMP_LABEL(.L_802C8268, 0x802C8268) //this is a jump label
/*802C8268 002C5068*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*802C826C 002C506C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*802C8270 002C5070*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x4);
/*802C8274 002C5074*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x9);
/*802C8278 002C5078*/ PPC::Runtime::ASM::blt(.L_802C81FC);
/*802C827C 002C507C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*802C8280 002C5080*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*802C8284 002C5084*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802C8288 002C5088*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802C828C 002C508C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802C8290 002C5090*/ PPC::Runtime::ASM::blr();
}