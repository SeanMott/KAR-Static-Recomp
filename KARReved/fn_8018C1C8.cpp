//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8018C1C8(PPC::Runtime::GCContext* context)
{
/*8018C1C8 00188FC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8018C1CC 00188FCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018C1D0 00188FD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8018C1D4 00188FD4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8018C1D8 00188FD8*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8018C1DC 00188FDC*/ PPC::Runtime::ASM::lis(context->r8, lbl_80559AC0 @ Get_MemoryOffset_HighBit);
/*8018C1E0 00188FE0*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*8018C1E4 00188FE4*/ PPC::Runtime::ASM::addi(context->r31, context->r8, lbl_80559AC0 @ Get_MemoryOffset_LowBit);
/*8018C1E8 00188FE8*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*8018C1EC 00188FEC*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*8018C1F0 00188FF0*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*8018C1F4 00188FF4*/ PPC::Runtime::ASM::mr(context->r29, context->r7);
/*8018C1F8 00188FF8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8018C1FC 00188FFC*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*8018C200 00189000*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8018C204 00189004*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x0);
/*8018C208 00189008*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8018C20C 0018900C*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8018C210 00189010*/ PPC::Runtime::ASM::beq(.L_8018C254);
/*8018C214 00189014*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x2);
/*8018C218 00189018*/ PPC::Runtime::ASM::ble(.L_8018C244);
/*8018C21C 0018901C*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*8018C220 00189020*/ PPC::Runtime::ASM::ble(.L_8018C234);
/*8018C224 00189024*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x84);
/*8018C228 00189028*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*8018C22C 0018902C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8018C230 00189030*/ PPC::Runtime::ASM::b(.L_8018C25C);
RUNTIME_PPC_JUMP_LABEL(.L_8018C234, 0x8018C234) //this is a jump label
/*8018C234 00189034*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x58);
/*8018C238 00189038*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*8018C23C 0018903C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8018C240 00189040*/ PPC::Runtime::ASM::b(.L_8018C25C);
RUNTIME_PPC_JUMP_LABEL(.L_8018C244, 0x8018C244) //this is a jump label
/*8018C244 00189044*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*8018C248 00189048*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*8018C24C 0018904C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8018C250 00189050*/ PPC::Runtime::ASM::b(.L_8018C25C);
RUNTIME_PPC_JUMP_LABEL(.L_8018C254, 0x8018C254) //this is a jump label
/*8018C254 00189054*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8018C258 00189058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8018C25C, 0x8018C25C) //this is a jump label
/*8018C25C 0018905C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8018C260 00189060*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8018C264 00189064*/ PPC::Runtime::ASM::beq(.L_8018C290);
/*8018C268 00189068*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x1);
/*8018C26C 0018906C*/ PPC::Runtime::ASM::ble(.L_8018C280);
/*8018C270 00189070*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xdc);
/*8018C274 00189074*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*8018C278 00189078*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8018C27C 0018907C*/ PPC::Runtime::ASM::b(.L_8018C298);
RUNTIME_PPC_JUMP_LABEL(.L_8018C280, 0x8018C280) //this is a jump label
/*8018C280 00189080*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xb0);
/*8018C284 00189084*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*8018C288 00189088*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8018C28C 0018908C*/ PPC::Runtime::ASM::b(.L_8018C298);
RUNTIME_PPC_JUMP_LABEL(.L_8018C290, 0x8018C290) //this is a jump label
/*8018C290 00189090*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8018C294 00189094*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8018C298, 0x8018C298) //this is a jump label
/*8018C298 00189098*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8018C29C 0018909C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8018C2A0 001890A0*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*8018C2A4 001890A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*8018C2A8 001890A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r30));
/*8018C2AC 001890AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8018C2B0 001890B0*/ PPC::Runtime::ASM::beq(.L_8018C2C4);
/*8018C2B4 001890B4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x108);
/*8018C2B8 001890B8*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*8018C2BC 001890BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*8018C2C0 001890C0*/ PPC::Runtime::ASM::b(.L_8018C2C8);
RUNTIME_PPC_JUMP_LABEL(.L_8018C2C4, 0x8018C2C4) //this is a jump label
/*8018C2C4 001890C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8018C2C8, 0x8018C2C8) //this is a jump label
/*8018C2C8 001890C8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8018C2CC 001890CC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8018C2D0 001890D0*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8018C2D4 001890D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8018C2D8 001890D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018C2DC 001890DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8018C2E0 001890E0*/ PPC::Runtime::ASM::blr();
}