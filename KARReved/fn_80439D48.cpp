//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_sprintf.hpp"
#include "fn_sprintf.hpp"



void fn_80439D48(PPC::Runtime::GCContext* context)
{
/*80439D48 00436B48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80439D4C 00436B4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80439D50 00436B50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80439D54 00436B54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80439D58 00436B58*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80439D5C 00436B5C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80439D60 00436B60*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80439D64 00436B64*/ PPC::Runtime::ASM::lwz(context->r5, StructValues_43 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439D68 00436B68*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*80439D6C 00436B6C*/ PPC::Runtime::ASM::beq(.L_80439F04);
/*80439D70 00436B70*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_HighBit);
/*80439D74 00436B74*/ PPC::Runtime::ASM::lwz(context->r0, MemoryOffset_250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439D78 00436B78*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_LowBit);
/*80439D7C 00436B7C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80439D80 00436B80*/ PPC::Runtime::ASM::addi(context->r11, context->r3, 0x8);
/*80439D84 00436B84*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*80439D88 00436B88*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0xc);
/*80439D8C 00436B8C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80439D90 00436B90*/ PPC::Runtime::ASM::li(context->r9, 0x1);
/*80439D94 00436B94*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80439D98 00436B98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80439D9C 00436B9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80439DA0 00436BA0*/ PPC::Runtime::ASM::ble(.L_80439DCC);
/*80439DA4 00436BA4*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*80439DA8 00436BA8*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*80439DAC 00436BAC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80439DB0 00436BB0*/ PPC::Runtime::ASM::bgt(.L_80439DB8);
/*80439DB4 00436BB4*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80439DB8, 0x80439DB8) //this is a jump label
/*80439DB8 00436BB8*/ PPC::Runtime::ASM::slwi(context->r4, context->r9, 3);
/*80439DBC 00436BBC*/ PPC::Runtime::ASM::lwz(context->r0, MemoryOffset_247 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439DC0 00436BC0*/ PPC::Runtime::ASM::stwx(context->r3, context->r11, context->r4);
/*80439DC4 00436BC4*/ PPC::Runtime::ASM::li(context->r9, 0x2);
/*80439DC8 00436BC8*/ PPC::Runtime::ASM::stwx(context->r0, context->r6, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80439DCC, 0x80439DCC) //this is a jump label
/*80439DCC 00436BCC*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x4);
/*80439DD0 00436BD0*/ PPC::Runtime::ASM::ble(.L_80439DEC);
/*80439DD4 00436BD4*/ PPC::Runtime::ASM::slwi(context->r3, context->r9, 3);
/*80439DD8 00436BD8*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x4);
/*80439DDC 00436BDC*/ PPC::Runtime::ASM::stwx(context->r0, context->r11, context->r3);
/*80439DE0 00436BE0*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*80439DE4 00436BE4*/ PPC::Runtime::ASM::lwz(context->r0, MemoryOffset_251 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439DE8 00436BE8*/ PPC::Runtime::ASM::stwx(context->r0, context->r6, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80439DEC, 0x80439DEC) //this is a jump label
/*80439DEC 00436BEC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805DE400 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439DF0 00436BF0*/ PPC::Runtime::ASM::lis(context->r7, 0x4330);
/*80439DF4 00436BF4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E60CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439DF8 00436BF8*/ PPC::Runtime::ASM::xoris(context->r8, context->r5, 0x8000);
/*80439DFC 00436BFC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_HighBit);
/*80439E00 00436C00*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80439E04 00436C04*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f4);
/*80439E08 00436C08*/ PPC::Runtime::ASM::addi(context->r10, context->r3, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_LowBit);
/*80439E0C 00436C0C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80439E10 00436C10*/ PPC::Runtime::ASM::slwi(context->r4, context->r9, 3);
/*80439E14 00436C14*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80439E18 00436C18*/ PPC::Runtime::ASM::lfd(context->f7, STRUCT_DOUBLE_COUNT_1805E60D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439E1C 00436C1C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80439E20 00436C20*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80439E24 00436C24*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80439E28 00436C28*/ PPC::Runtime::ASM::addi(context->r12, context->r10, 0x88);
/*80439E2C 00436C2C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f7);
/*80439E30 00436C30*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DE3FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439E34 00436C34*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80439E38 00436C38*/ PPC::Runtime::ASM::addi(context->r30, context->r10, 0x110);
/*80439E3C 00436C3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DE3F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439E40 00436C40*/ PPC::Runtime::ASM::fdivs(context->f6, context->f4, context->f2);
/*80439E44 00436C44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80439E48 00436C48*/ PPC::Runtime::ASM::addi(context->r29, context->r10, 0x198);
/*80439E4C 00436C4C*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80439E50 00436C50*/ PPC::Runtime::ASM::addi(context->r0, context->r10, 0x220);
/*80439E54 00436C54*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80439E58 00436C58*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80439E5C 00436C5C*/ PPC::Runtime::ASM::li(context->r9, 0x2);
/*80439E60 00436C60*/ PPC::Runtime::ASM::lwz(context->r6, MemoryOffset_249 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439E64 00436C64*/ PPC::Runtime::ASM::li(context->r31, 0x4);
/*80439E68 00436C68*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80439E6C 00436C6C*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80439E70 00436C70*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80439E74 00436C74*/ PPC::Runtime::ASM::stwx(context->r5, context->r11, context->r4);
/*80439E78 00436C78*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f7);
/*80439E7C 00436C7C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E60D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439E80 00436C80*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f7);
/*80439E84 00436C84*/ PPC::Runtime::ASM::lwz(context->r5, MemoryOffset_248 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439E88 00436C88*/ PPC::Runtime::ASM::lwz(context->r4, AllFs_5 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439E8C 00436C8C*/ PPC::Runtime::ASM::fdivs(context->f5, context->f2, context->f0);
/*80439E90 00436C90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80439E94 00436C94*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80439E98 00436C98*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80439E9C 00436C9C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80439EA0 00436CA0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80439EA4 00436CA4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80439EA8 00436CA8*/ PPC::Runtime::ASM::fsubs(context->f2, context->f0, context->f7);
/*80439EAC 00436CAC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80439EB0 00436CB0*/ PPC::Runtime::ASM::fdivs(context->f2, context->f3, context->f2);
/*80439EB4 00436CB4*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*80439EB8 00436CB8*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r10));
/*80439EBC 00436CBC*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r10));
/*80439EC0 00436CC0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r10));
/*80439EC4 00436CC4*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r10));
/*80439EC8 00436CC8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f7);
/*80439ECC 00436CCC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r10));
/*80439ED0 00436CD0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r10));
/*80439ED4 00436CD4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80439ED8 00436CD8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r10));
/*80439EDC 00436CDC*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r10));
/*80439EE0 00436CE0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r10));
/*80439EE4 00436CE4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r10));
/*80439EE8 00436CE8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r10));
/*80439EEC 00436CEC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r10));
/*80439EF0 00436CF0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r10));
/*80439EF4 00436CF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r10));
/*80439EF8 00436CF8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a4, context->r10));
/*80439EFC 00436CFC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r10));
/*80439F00 00436D00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r10));
RUNTIME_PPC_JUMP_LABEL(.L_80439F04, 0x80439F04) //this is a jump label
/*80439F04 00436D04*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439F08 00436D08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80439F0C 00436D0C*/ PPC::Runtime::ASM::beq(.L_80439FCC);
/*80439F10 00436D10*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_HighBit);
/*80439F14 00436D14*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80439F18 00436D18*/ PPC::Runtime::ASM::addi(context->r5, context->r4, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_LowBit);
/*80439F1C 00436D1C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80507280 @ Get_MemoryOffset_HighBit);
/*80439F20 00436D20*/ PPC::Runtime::ASM::mulli(context->r6, context->r31, 0x88);
/*80439F24 00436D24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DE3F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439F28 00436D28*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x4);
/*80439F2C 00436D2C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DE3FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439F30 00436D30*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DE400 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439F34 00436D34*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80507280 @ Get_MemoryOffset_LowBit);
/*80439F38 00436D38*/ PPC::Runtime::ASM::add(context->r29, context->r5, context->r6);
/*80439F3C 00436D3C*/ PPC::Runtime::ASM::stwx(context->r0, context->r30, context->r6);
/*80439F40 00436D40*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805DE404 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439F44 00436D44*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x8);
/*80439F48 00436D48*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805DE408 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439F4C 00436D4C*/ PPC::Runtime::ASM::lfs(context->f6, STRUCT_FLOAT_COUNT_1805DE40C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 80439F50 00436D50  4C C6 32 42 */ crset context->cr1eq
/*80439F54 00436D54*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*80439F58 00436D58*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1);
/*80439F5C 00436D5C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE428 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439F60 00436D60*/ PPC::Runtime::ASM::mulli(context->r5, context->r3, 0x88);
/*80439F64 00436D64*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80439F68 00436D68*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_HighBit);
/*80439F6C 00436D6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80439F70 00436D70*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_LowBit);
/*80439F74 00436D74*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r5);
/*80439F78 00436D78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80439F7C 00436D7C*/ PPC::Runtime::ASM::beq(.L_80439FCC);
/*80439F80 00436D80*/ PPC::Runtime::ASM::mulli(context->r5, context->r31, 0x88);
/*80439F84 00436D84*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80439F88 00436D88*/ PPC::Runtime::ASM::lis(context->r3, lbl_805072D8 @ Get_MemoryOffset_HighBit);
/*80439F8C 00436D8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DE41C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439F90 00436D90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DE420 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439F94 00436D94*/ PPC::Runtime::ASM::add(context->r29, context->r4, context->r5);
/*80439F98 00436D98*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_805072D8 @ Get_MemoryOffset_LowBit);
/*80439F9C 00436D9C*/ PPC::Runtime::ASM::stwx(context->r0, context->r30, context->r5);
/*80439FA0 00436DA0*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DE424 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80439FA4 00436DA4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x8);
/* 80439FA8 00436DA8  4C C6 32 42 */ crset context->cr1eq
/*80439FAC 00436DAC*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*80439FB0 00436DB0*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x1);
/*80439FB4 00436DB4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_HighBit);
/*80439FB8 00436DB8*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x88);
/*80439FBC 00436DBC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80439FC0 00436DC0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_LowBit);
/*80439FC4 00436DC4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80439FC8 00436DC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80439FCC, 0x80439FCC) //this is a jump label
/*80439FCC 00436DCC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80439FD0 00436DD0*/ PPC::Runtime::ASM::bne(.L_80439FDC);
/*80439FD4 00436DD4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80439FD8 00436DD8*/ PPC::Runtime::ASM::b(.L_80439FF4);
RUNTIME_PPC_JUMP_LABEL(.L_80439FDC, 0x80439FDC) //this is a jump label
/*80439FDC 00436DDC*/ PPC::Runtime::ASM::mulli(context->r0, context->r31, 0x88);
/*80439FE0 00436DE0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_HighBit);
/*80439FE4 00436DE4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80439FE8 00436DE8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18058CE68 @ Get_MemoryOffset_LowBit);
/*80439FEC 00436DEC*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80439FF0 00436DF0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x88, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80439FF4, 0x80439FF4) //this is a jump label
/*80439FF4 00436DF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80439FF8 00436DF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80439FFC 00436DFC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8043A000 00436E00*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8043A004 00436E04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8043A008 00436E08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8043A00C 00436E0C*/ PPC::Runtime::ASM::blr();
}