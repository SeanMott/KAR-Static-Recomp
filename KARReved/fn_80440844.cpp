//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn___assert.hpp"
#include "fn_80449648.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80440844(PPC::Runtime::GCContext* context)
{
/*80440844 0043D644*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80440848 0043D648*/ PPC::Runtime::ASM::mflr(context->r0);
/*8044084C 0043D64C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80440850 0043D650*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80440854 0043D654*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80440858 0043D658*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8044085C 0043D65C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 80440860 0043D660  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*80440864 0043D664*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE494 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80440868 0043D668*/ PPC::Runtime::ASM::and(context->r29, context->r28, context->r0);
/*8044086C 0043D66C*/ PPC::Runtime::ASM::blt(.L_8044087C);
/*80440870 0043D670*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE49C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80440874 0043D674*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*80440878 0043D678*/ PPC::Runtime::ASM::ble(.L_80440884);
RUNTIME_PPC_JUMP_LABEL(.L_8044087C, 0x8044087C) //this is a jump label
/*8044087C 0043D67C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80440880 0043D680*/ PPC::Runtime::ASM::b(.L_80440970);
RUNTIME_PPC_JUMP_LABEL(.L_80440884, 0x80440884) //this is a jump label
/*80440884 0043D684*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80440888 0043D688*/ PPC::Runtime::ASM::mulli(context->r0, context->r29, 0x48);
/*8044088C 0043D68C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE48C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80440890 0043D690*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80440894 0043D694*/ PPC::Runtime::ASM::add(context->r30, context->r4, context->r0);
/*80440898 0043D698*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8044089C 0043D69C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*804408A0 0043D6A0*/ PPC::Runtime::ASM::bne(.L_804408B0);
/*804408A4 0043D6A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/* 804408A8 0043D6A8  54 04 00 03 */ clrrwi. context->r4 , context->r0 , 30
/*804408AC 0043D6AC*/ PPC::Runtime::ASM::bne(.L_804408C0);
RUNTIME_PPC_JUMP_LABEL(.L_804408B0, 0x804408B0) //this is a jump label
/*804408B0 0043D6B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804408B4 0043D6B4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804408B8 0043D6B8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804408BC 0043D6BC*/ PPC::Runtime::ASM::b(.L_80440970);
RUNTIME_PPC_JUMP_LABEL(.L_804408C0, 0x804408C0) //this is a jump label
/*804408C0 0043D6C0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*804408C4 0043D6C4*/ PPC::Runtime::ASM::bne(.L_804408D0);
/*804408C8 0043D6C8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*804408CC 0043D6CC*/ PPC::Runtime::ASM::b(.L_80440964);
RUNTIME_PPC_JUMP_LABEL(.L_804408D0, 0x804408D0) //this is a jump label
/*804408D0 0043D6D0*/ PPC::Runtime::ASM::subis(context->r0, context->r4, 0x4000);
/*804408D4 0043D6D4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804408D8 0043D6D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804408DC 0043D6DC*/ PPC::Runtime::ASM::beq(.L_804408EC);
/*804408E0 0043D6E0*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x8000);
/*804408E4 0043D6E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804408E8 0043D6E8*/ PPC::Runtime::ASM::bne(.L_804408F0);
RUNTIME_PPC_JUMP_LABEL(.L_804408EC, 0x804408EC) //this is a jump label
/*804408EC 0043D6EC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_804408F0, 0x804408F0) //this is a jump label
/*804408F0 0043D6F0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*804408F4 0043D6F4*/ PPC::Runtime::ASM::bne(.L_80440910);
/*804408F8 0043D6F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_805089E8 @ Get_MemoryOffset_HighBit);
/*804408FC 0043D6FC*/ PPC::Runtime::ASM::lis(context->r5, lbl_80508A1C @ Get_MemoryOffset_HighBit);
/*80440900 0043D700*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805089E8 @ Get_MemoryOffset_LowBit);
/*80440904 0043D704*/ PPC::Runtime::ASM::li(context->r4, 0x9e);
/*80440908 0043D708*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80508A1C @ Get_MemoryOffset_LowBit);
/*8044090C 0043D70C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80440910, 0x80440910) //this is a jump label
/*80440910 0043D710*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80440914 0043D714*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80440918 0043D718*/ PPC::Runtime::ASM::beq(.L_80440948);
/*8044091C 0043D71C*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058E298 @ Get_MemoryOffset_HighBit);
/*80440920 0043D720*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r3, 26, 2);
/*80440924 0043D724*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_8058E298 @ Get_MemoryOffset_LowBit);
/*80440928 0043D728*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8044092C 0043D72C*/ PPC::Runtime::ASM::stwx(context->r5, context->r4, context->r0);
/*80440930 0043D730*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80440934 0043D734*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80440938 0043D738*/ PPC::Runtime::ASM::bl(fn_80449648);
/*8044093C 0043D73C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE454 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80440940 0043D740*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80440944 0043D744*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE454 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80440948, 0x80440948) //this is a jump label
/*80440948 0043D748*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8044094C 0043D74C*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*80440950 0043D750*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 3, 1);
/*80440954 0043D754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80440958 0043D758*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8044095C 0043D75C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 2);
/*80440960 0043D760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80440964, 0x80440964) //this is a jump label
/*80440964 0043D764*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80440968 0043D768*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8044096C 0043D76C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_80440970, 0x80440970) //this is a jump label
/*80440970 0043D770*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80440974 0043D774*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80440978 0043D778*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8044097C 0043D77C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80440980 0043D780*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80440984 0043D784*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80440988 0043D788*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8044098C 0043D78C*/ PPC::Runtime::ASM::blr();
}