//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F7A64.hpp"
#include "fn_800FE908.hpp"
#include "fn_800FE968.hpp"
#include "fn_800EA084.hpp"
#include "fn_800FF220.hpp"



void fn_800FA3C0(PPC::Runtime::GCContext* context)
{
/*800FA3C0 000F71C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800FA3C4 000F71C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FA3C8 000F71C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FA3CC 000F71CC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800FA3D0 000F71D0*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*800FA3D4 000F71D4*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*800FA3D8 000F71D8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FA3DC 000F71DC*/ PPC::Runtime::ASM::mulli(context->r31, context->r26, 0x140);
/*800FA3E0 000F71E0*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*800FA3E4 000F71E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*800FA3E8 000F71E8*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r31);
/*800FA3EC 000F71EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r3));
/*800FA3F0 000F71F0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800FA3F4 000F71F4*/ PPC::Runtime::ASM::beq(.L_800FA578);
/*800FA3F8 000F71F8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FA3FC 000F71FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800FA400 000F7200*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*800FA404 000F7204*/ PPC::Runtime::ASM::beq(.L_800FA420);
/*800FA408 000F7208*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_999 @ Get_MemoryOffset_HighBit);
/*800FA40C 000F720C*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_1000 @ Get_MemoryOffset_HighBit);
/*800FA410 000F7210*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_999 @ Get_MemoryOffset_LowBit);
/*800FA414 000F7214*/ PPC::Runtime::ASM::li(context->r4, 0xc4);
/*800FA418 000F7218*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_1000 @ Get_MemoryOffset_LowBit);
/*800FA41C 000F721C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FA420, 0x800FA420) //this is a jump label
/*800FA420 000F7220*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800FA424 000F7224*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FA428 000F7228*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800FA42C 000F722C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800FA430 000F7230*/ PPC::Runtime::ASM::b(.L_800FA570);
RUNTIME_PPC_JUMP_LABEL(.L_800FA434, 0x800FA434) //this is a jump label
/*800FA434 000F7234*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FA438 000F7238*/ PPC::Runtime::ASM::bl(fn_800F7A64);
/*800FA43C 000F723C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800FA440 000F7240*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*800FA444 000F7244*/ PPC::Runtime::ASM::bne(.L_800FA56C);
/*800FA448 000F7248*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2f);
/*800FA44C 000F724C*/ PPC::Runtime::ASM::beq(.L_800FA55C);
/*800FA450 000F7250*/ PPC::Runtime::ASM::bge(.L_800FA460);
/*800FA454 000F7254*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2e);
/*800FA458 000F7258*/ PPC::Runtime::ASM::bge(.L_800FA46C);
/*800FA45C 000F725C*/ PPC::Runtime::ASM::b(.L_800FA55C);
RUNTIME_PPC_JUMP_LABEL(.L_800FA460, 0x800FA460) //this is a jump label
/*800FA460 000F7260*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x31);
/*800FA464 000F7264*/ PPC::Runtime::ASM::bge(.L_800FA55C);
/*800FA468 000F7268*/ PPC::Runtime::ASM::b(.L_800FA4CC);
RUNTIME_PPC_JUMP_LABEL(.L_800FA46C, 0x800FA46C) //this is a jump label
/*800FA46C 000F726C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FA470 000F7270*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FA474 000F7274*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800FA478 000F7278*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*800FA47C 000F727C*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x138);
/*800FA480 000F7280*/ PPC::Runtime::ASM::lwzx(context->r5, context->r31, context->r0);
/*800FA484 000F7284*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*800FA488 000F7288*/ PPC::Runtime::ASM::bl(fn_800FE908);
/*800FA48C 000F728C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FA490 000F7290*/ PPC::Runtime::ASM::beq(.L_800FA4C0);
/*800FA494 000F7294*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FA498 000F7298*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800FA49C 000F729C*/ PPC::Runtime::ASM::bl(fn_800FE968);
/*800FA4A0 000F72A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r28));
/*800FA4A4 000F72A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FA4A8 000F72A8*/ PPC::Runtime::ASM::ble(.L_800FA4B8);
/*800FA4AC 000F72AC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x118);
/*800FA4B0 000F72B0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FA4B4 000F72B4*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_800FA4B8, 0x800FA4B8) //this is a jump label
/*800FA4B8 000F72B8*/ PPC::Runtime::ASM::mr(context->r0, context->r29);
/*800FA4BC 000F72BC*/ PPC::Runtime::ASM::b(.L_800FA4C4);
RUNTIME_PPC_JUMP_LABEL(.L_800FA4C0, 0x800FA4C0) //this is a jump label
/*800FA4C0 000F72C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800FA4C4, 0x800FA4C4) //this is a jump label
/*800FA4C4 000F72C4*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*800FA4C8 000F72C8*/ PPC::Runtime::ASM::b(.L_800FA55C);
RUNTIME_PPC_JUMP_LABEL(.L_800FA4CC, 0x800FA4CC) //this is a jump label
/*800FA4CC 000F72CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FA4D0 000F72D0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800FA4D4 000F72D4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*800FA4D8 000F72D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*800FA4DC 000F72DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800FA4E0 000F72E0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x138);
/*800FA4E4 000F72E4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r31, context->r0);
/*800FA4E8 000F72E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800FA4EC 000F72EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FA4F0 000F72F0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800FA4F4 000F72F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800FA4F8 000F72F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FA4FC 000F72FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800FA500 000F7300*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800FA504 000F7304*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FA508 000F7308*/ PPC::Runtime::ASM::ble(.L_800FA52C);
RUNTIME_PPC_JUMP_LABEL(.L_800FA50C, 0x800FA50C) //this is a jump label
/*800FA50C 000F730C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800FA510 000F7310*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r6);
/*800FA514 000F7314*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*800FA518 000F7318*/ PPC::Runtime::ASM::bne(.L_800FA524);
/*800FA51C 000F731C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800FA520 000F7320*/ PPC::Runtime::ASM::b(.L_800FA530);
RUNTIME_PPC_JUMP_LABEL(.L_800FA524, 0x800FA524) //this is a jump label
/*800FA524 000F7324*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*800FA528 000F7328*/ PPC::Runtime::ASM::bdnz(.L_800FA50C);
RUNTIME_PPC_JUMP_LABEL(.L_800FA52C, 0x800FA52C) //this is a jump label
/*800FA52C 000F732C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800FA530, 0x800FA530) //this is a jump label
/*800FA530 000F7330*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FA534 000F7334*/ PPC::Runtime::ASM::beq(.L_800FA554);
/*800FA538 000F7338*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FA53C 000F733C*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800FA540 000F7340*/ PPC::Runtime::ASM::bl(fn_800FF220);
/*800FA544 000F7344*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FA548 000F7348*/ PPC::Runtime::ASM::beq(.L_800FA554);
/*800FA54C 000F734C*/ PPC::Runtime::ASM::mr(context->r0, context->r29);
/*800FA550 000F7350*/ PPC::Runtime::ASM::b(.L_800FA558);
RUNTIME_PPC_JUMP_LABEL(.L_800FA554, 0x800FA554) //this is a jump label
/*800FA554 000F7354*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800FA558, 0x800FA558) //this is a jump label
/*800FA558 000F7358*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800FA55C, 0x800FA55C) //this is a jump label
/*800FA55C 000F735C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*800FA560 000F7360*/ PPC::Runtime::ASM::beq(.L_800FA56C);
/*800FA564 000F7364*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800FA568 000F7368*/ PPC::Runtime::ASM::b(.L_800FA57C);
RUNTIME_PPC_JUMP_LABEL(.L_800FA56C, 0x800FA56C) //this is a jump label
/*800FA56C 000F736C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800FA570, 0x800FA570) //this is a jump label
/*800FA570 000F7370*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800FA574 000F7374*/ PPC::Runtime::ASM::bne(.L_800FA434);
RUNTIME_PPC_JUMP_LABEL(.L_800FA578, 0x800FA578) //this is a jump label
/*800FA578 000F7378*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800FA57C, 0x800FA57C) //this is a jump label
/*800FA57C 000F737C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800FA580 000F7380*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*800FA584 000F7384*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FA588 000F7388*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FA58C 000F738C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800FA590 000F7390*/ PPC::Runtime::ASM::blr();
}